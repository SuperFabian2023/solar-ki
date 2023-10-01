#include <EloquentTinyML.h>
#include "solar_production_model_data.h"
//Für Fernbediehnung:
#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>
//Für Uhrzeit:
#include <WiFi.h>
#include "time.h"
//Für Display:
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#define SDA 13                    //Define SDA pins
#define SCL 14                    //Define SCL pins
LiquidCrystal_I2C lcd(0x27,16,2);

//Für IR
const uint16_t recvPin = 15; // Infrared receiving pin
IRrecv irrecv(recvPin);      // Create a class object used to receive class
decode_results results;       // Create a decoding results class object
//Für Uhrzeit:
const char* ssid = "WIFI_SSID";
const char* password = "WIFI-PASSWORD";

const char* ntpServer = "pool.ntp.org";
const long  gmtOffset_sec = 3600;  //Zeitzoneneinstellung
const int   daylightOffset_sec = 3600;
int currentTime = 8;
int pages = 12;

#define NUMBER_OF_INPUTS 2
#define NUMBER_OF_OUTPUTS 1
#define TENSOR_ARENA_SIZE 2*1024

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> ml;


void setup() {
  Serial.begin(115200);
  ml.begin(solar_production_model_tflite); //Aus der .h Datei
  
  Wire.begin(SDA, SCL);           // attach the IIC pin
  if (!i2CAddrTest(0x27)) {
    lcd = LiquidCrystal_I2C(0x3F, 16, 2);
  }
  lcd.init();
  lcd.backlight();                // Open the backlight
  lcd.setCursor(0,0);             // Move the cursor to row 0, column 0
  lcd.print("Solar-KI");
  delay(1000);
  //Für Uhrzeit:
  // Verbinden mit WLAN
  Serial.print("Verbinde mit WLAN ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  lcd.setCursor(0,0);             // Move the cursor to row 0, column 0
  lcd.print("Verbinde mit");     // The print content is displayed on the LCD
  lcd.setCursor(0,1);
  lcd.print("WLAN ");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    lcd.setCursor(5,1);             
    lcd.print("...");     
    delay(500);
    lcd.setCursor(5,1);             
    lcd.print("   ");
  }
  Serial.println("");
  Serial.println("WiFi connected.");
  lcd.clear();
  lcd.print("Verbindung zum");
  lcd.setCursor(0,1);
  lcd.print("WLAN hergestellt");
  
  // Init and get the time
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
  printLocalTime();

  //disconnect WiFi
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);

  delay(500);
  lcd.setCursor(0,0);             // Move the cursor to row 0, column 0
  lcd.print("                ");     // The print content is displayed on the LCD
  lcd.setCursor(0,1);             // Move the cursor to row 1, column 0
  lcd.print("                ");     // The print content is displayed on the LCD

  lcd.setCursor(0,0);             // Move the cursor to row 0, column 0
  lcd.print("Zeit");     // The print content is displayed on the LCD
  lcd.setCursor(7,0);             // Move the cursor to row 0, column 7
  lcd.print("UV");     // The print content is displayed on the LCD
  lcd.setCursor(11,0);             // Move the cursor to row 0, column 11
  lcd.print("Solar");     // The print content is displayed on the LCD

  //Für IR
  irrecv.enableIRIn();        // Start the receiver
  Serial.print("IRrecvDemo is now running and waiting for IR message on Pin ");
  Serial.println(recvPin);   //print the infrared receiving pin

  printLocalTime();
  pages = currentTime;
}

void loop() {
  //Uhrzeit:
  printLocalTime();
  //IR
  if (irrecv.decode(&results)) {          // Waiting for decoding
    //serialPrintUint64(results.value, HEX);  // Print out the decoded results
    handleControl(results.value);
    irrecv.resume();                      // Release the IRremote. Receive the next value
    delay(500);
  }
  if (pages < currentTime) { //Nur Predictions machen wenn die Uhrzeit größer bzw gleich die akuelle Uhrzeit ist
    pages = currentTime;
  }
  //Inputs
  float x2 = 4;      //UV Wert
  float input[2] = {pages, x2};
  //Output
  float predicted = ml.predict(input);
  
  //Ausgeben
  Serial.print("Zeit: ");
  Serial.print(pages);
  if (pages >= 10) {
    lcd.setCursor(0,1);             // Move the cursor to row 1, column 0
  } else {
    lcd.setCursor(0,1);
    lcd.print("0");
    lcd.setCursor(1,1);             // Move the cursor to row 1, column 1
  }
  lcd.print(pages);     // The print content is displayed on the LCD
  Serial.print(" UV-Strahlung: ");
  Serial.print(x2);
  lcd.setCursor(7,1);             // Move the cursor to row 1, column 6
  lcd.print((int)x2);     // The print content is displayed on the LCD
  Serial.print("\t predicted: ");
  Serial.println(predicted);
  //Prediction über 100? Damit es Ordentlich angezeigt wird
  if(predicted >= 100) {
    //Fange früher an mit anzeigen
    lcd.setCursor(10,1);             // Move the cursor to row 1, column 10
    lcd.print(predicted);     // The print content is displayed on the LCD
  }
  else {
    //Fange Später an mit anzeigen
    lcd.setCursor(11,1);             // Move the cursor to row 1, column 11
    lcd.print(predicted);     // The print content is displayed on the LCD
  }
  delay(500);
}

//LCD-Display
bool i2CAddrTest(uint8_t addr) {
  Wire.begin();
  Wire.beginTransmission(addr);
  if (Wire.endTransmission() == 0) {
    return true;
  }
  return false;
}

void handleControl(unsigned long value) {
  switch (value) {
    case 0xFFE01F:
      pages--;
      Serial.print("Seite: ");
      Serial.println(pages);
      break;
    case 0xFF906F:
      pages++;
      Serial.print("Seite: ");
      Serial.println(pages);
      break;
  }
}

void printLocalTime(){
  struct tm timeinfo;
  if(!getLocalTime(&timeinfo)){
    Serial.println("Failed to obtain time");
    return;
  }
  //Serial.print("Hour: ");
  //Serial.println(timeinfo.tm_hour);
  currentTime = timeinfo.tm_hour;
}