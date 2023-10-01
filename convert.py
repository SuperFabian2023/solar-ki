import tensorflow as tf
import os

# Speicherpfad für das TensorFlow Lite Modell im Unterordner "ki-arduino"
subfolder = "ki-arduino"
model_path = os.path.join(subfolder, 'solar_production_model.tflite')

# Überprüfe, ob das TFL Modell existiert, und lösche es gegebenenfalls
if os.path.exists(model_path):
    os.remove(model_path)

# Vorher trainiertes Modell laden
model = tf.keras.models.load_model('solar_production_model.h5')

# Konvertiere das Modell in TensorFlow Lite
converter = tf.lite.TFLiteConverter.from_keras_model(model)
tflite_model = converter.convert()

# Speicherpfad für das TensorFlow Lite Modell im Unterordner "KI-Arduino"
subfolder = "ki-arduino"
model_path = os.path.join(subfolder, 'solar_production_model.tflite')

# Überprüfe, ob das Modell existiert, und lösche es gegebenenfalls
if os.path.exists(model_path):
    os.remove(model_path)

# Speichere das TensorFlow Lite Modell im Unterordner
with open(model_path, 'wb') as f:
    f.write(tflite_model)