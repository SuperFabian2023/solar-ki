# Solar-KI

## Beschreibung
Dieses Projekt ist eine einfache Anwendung, die entwickelt wurde, um die Solarproduktion mit entsprechenden UV und Uhrzeitdaten vorherzusagen. Die Anwendung wurde in Python und Arduino geschrieben und verwendet TensorFlow, TensorFlow Lite, Numpy, OS, Requests und weitere Bibiotheken um die Vorhersage zu tätigen entweder per Python Script oder als hardwarebasierte Lösung mit dem Esp32 einem LCD-Display und einer IR-Fernbedienung/einen IR-Empfänger.

## Funktionen
- Die KI mithilfe des train.py Scripts trainieren
- Die KI mit ki.py benutzen, für Solarproduktion Vorhersagen
- Die KI als hardwarebasierte Lösung mit einem Esp32, LCD-Display, ... ausführen, für Solarproduktions Vorhersagen

## Installation

### Installation für ki.py Script
1. Bibiotheken Installieren, eine Liste der Bibiotheken unten.
2. (Optional) Die KI trainieren da sie nur für einen bestimmten Standort trainiert wurde (Mit train.py).
3. Im ki.py Script die time und uv Variable anpassen oder falls möglich eine API_URL angeben, dann muss nur die time Variable aktualisiert werden.
4. ki.py ausführen.

### Installation für Hardwarebasierte Lösung
1. Bibiotheken Installieren, eine Liste der Bibiotheken unten.
2. (Optional) Die KI trainieren da sie nur für einen bestimmten Standort trainiert wurde (Mit train.py). Anschließend mit convert.py die Trainierte TensorFlow KI in ein TensorFlow Lite Modell umwandeln (Es sollte dann im ki-arduino Ordner eine solar_production_model.tflite Datei geben). Anschließend die .tflite Datei in eine .h Datei umwandeln (siehe unten).
3. ki-arduino.ino öffnen (im Ordner ki-arduino)
4. Esp32 mit dem Angeschlossenen LCD-Display und der IR-Fernbedienung/ dem IR-Empfänger an dem Computer anschließen und das Script auf dem Esp32 hochladen

### Schritte um .tflite in .h zu konvertieren (Mac Variante):
1. Öffnen sie das Terminal:
- Drücken Sie Cmd + Leertaste gleichzeitig, um das Spotlight-Suchfeld zu öffnen.
- Geben Sie "Terminal" ein.

2. Wechseln Sie zum Verzeichnis, in dem sich die `.tflite`-Datei befindet:
   - Verwenden Sie den Befehl `cd`, um zum entsprechenden Verzeichnis zu navigieren, z. B.:
     cd Pfad\zum\Verzeichnis

3. Führen Sie die `xxd`-Konvertierung aus:
   - Führen Sie den folgenden Befehl aus, um die `.tflite`-Datei in eine `.h`-Datei umzuwandeln:
     xxd -i solar_production_model.tflite > solar_production_model_data.h

4. Öffnen Sie die `solar_production_model_data.h`-Datei in einem Texteditor.
   
5. Fügen Sie oben in der Datei den folgenden Code ein:
   #ifdef __has_attribute
   #define HAVE_ATTRIBUTE(x) __has_attribute(x)
   #else
   #define HAVE_ATTRIBUTE(x) 0
   #endif
   #if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
   #define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
   #else
   #define DATA_ALIGN_ATTRIBUTE
   #endif
   Fügen Sie dies ein (nach `unsigned char solar_production_model_tflite[]`):
   DATA_ALIGN_ATTRIBUTE
6. Speichern Sie die Datei.



1. Öffnen Sie die Eingabeaufforderung (Command Prompt):
   - Drücken Sie `Win + R`, geben Sie `cmd` ein und drücken Sie Enter.

2. Wechseln Sie zum Verzeichnis, in dem sich die `.tflite`-Datei befindet:
   - Verwenden Sie den Befehl `cd`, um zum entsprechenden Verzeichnis zu navigieren, z. B.:
     cd Pfad\zum\Verzeichnis

3. Führen Sie die `xxd`-Konvertierung aus:
   - Führen Sie den folgenden Befehl aus, um die `.tflite`-Datei in eine `.h`-Datei umzuwandeln:
     xxd -i solar_production_model.tflite > solar_production_model_data.h

4. Öffnen Sie die `solar_production_model_data.h`-Datei in einem Texteditor.
   
5. Fügen Sie oben in der Datei den folgenden Code ein:
   #ifdef __has_attribute
   #define HAVE_ATTRIBUTE(x) __has_attribute(x)
   #else
   #define HAVE_ATTRIBUTE(x) 0
   #endif
   #if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
   #define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
   #else
   #define DATA_ALIGN_ATTRIBUTE
   #endif
   Fügen Sie dies ein (nach `unsigned char solar_production_model_tflite[]`):
   DATA_ALIGN_ATTRIBUTE
6. Speichern Sie die Datei.

## Bibiotheken:

### Für das ki.py Script:
- Tensorflow
- Numpy
- requests

### Für das train.py Script:
- TensorFlow
- Numpy
- OS (Standardmäßig integriert)

### Für das convert.py Script:
- TensorFlow
- OS (Standardmäßig integriert)

### Für das ki-arduino.ino Script:
- EloquentTinyML (Für TensorFlow Lite auf dem Esp32 empfohlene Version 0.0.10)
- IRremoteESP8266 (Für die IR Fernbedienung)
- LiquidCrystal I2C (Für LCD-Display)
