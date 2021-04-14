# Nuxera, un asistente para GNU/Linux.

### Instalación 🔧

A continuación se indican los pasos para la instalación de un proyecto. Cada proyecto cuenta con un script único de instalación de dependencias:

Pasos para su ejecución

### »Nuxera, un asistente básico de voz para GNU/Linux.

* Instalación de dependencias

```Bash
> chmod +x installNuxera.sh
> sudo ./installNuxera.sh
```

* Una vez instaladas las dependencias, simplemente ejecuta con Python 3 el programa deseado:

```Bash 
> python3 asistenteArch.py
```
* Por último, asegurate de tener la carpeta *model* en el mismo directorio del programa, la puedes encontrar en la carpeta de cada proyecto o descargarla desde la documentación de [vosk](https://alphacephei.com/vosk/models), puedes elegir el idioma que desees y descargar el modelo de ese idioma.


###  Contenido 📋

En esta carpeta encontrarás, un archivo de [instalacion](https://github.com/UzuRodri95/voiceProject/blob/main/nuxera/installNuxera.sh) , un archivo con posibles [acciones](https://github.com/UzuRodri95/voiceProject/blob/main/nuxera/acciones.txt) para el asistente, un programa básico del asistente llamado [asistente básico](https://github.com/UzuRodri95/voiceProject/blob/main/nuxera/asistenteBasico.py) , un programa avanzando del [asistente sin text to speech](https://github.com/UzuRodri95/voiceProject/blob/main/nuxera/asistenteArchswtoTtS.py) y un [asistente completo](https://github.com/UzuRodri95/voiceProject/blob/main/nuxera/asistenteArchs.py)

También encontrarás una carpeta *model* que contiene el modelo en castellano de [vosk](https://alphacephei.com/vosk/models), el asistente básico necesitará ser ejecutado en castellano pero las otras versiones no requieren de esa versión del modelo y pueden utilizar cualquier otro, diponible en la documentación de [vosk](https://alphacephei.com/vosk/models).

## Construido con 🛠️

* [Vosk](https://alphacephei.com/vosk/) - La librería de voz usada
* [Python 3](https://docs.python.org/3/) - El lenguaje de programación usado
* [PyTTS](https://pypi.org/project/pyttsx3/) - Modelo de text to speech offline.
* [gTTS](https://gtts.readthedocs.io/en/latest/) - Modelo de text to speech online.

Para más dudas leer el [Readme](https://github.com/UzuRodri95/voiceProject) principal.
