import tensorflow as tf
import numpy as np
import requests

time = 12   # Hier die Uhrzeit für Vorhersage eingeben als Ganzzahl (in h)
# Hier die API für den UV Wert einfügen
api_url = f"API_URL"
# Laden des gespeicherten Modells
loaded_model = tf.keras.models.load_model('solar_production_model.h5')
uv = 4 #falls keine API_URL angeben wollen hier uv wert eintragen

#Überprüfung ob eine API_URL eingetragen wurde
if api_url != f"API_URL":
    # Die API-Anfrage durchführen
    response = requests.get(api_url)
    # Überprüfen des Statuscodes der Antwort
    if response.status_code == 200:
        # Die Antwort als JSON
        data = response.json()
        # UV-Wert aus der Antwort extrahieren
        uv = data['forecast']['forecastday'][0]['hour'][-1]['uv']
# Eingabedaten für Uhrzeit und UV-Strahlung
new_data = np.array([[time, uv]])

# Vorhersagen mit dem geladenen Modell machen
predictions = loaded_model.predict(new_data)

# Die Vorhersagen ausgeben
for i in range(len(predictions)):
    print(f'Für UV-Strahlung {uv} und Uhrzeit {time} beträgt die vorhergesagte Stromproduktion: {predictions}')
