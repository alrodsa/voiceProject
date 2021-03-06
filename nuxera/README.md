# Nuxera, un asistente para GNU/Linux.


##  Contenido 馃搵

En esta carpeta encontrar谩s, un archivo de [instalacion](https://github.com/UzuRodri95/voiceProject/blob/main/nuxera/installNuxera.sh) , un archivo con posibles [acciones](https://github.com/UzuRodri95/voiceProject/blob/main/nuxera/acciones.txt) para el asistente, un programa b谩sico del asistente llamado [asistente b谩sico](https://github.com/UzuRodri95/voiceProject/blob/main/nuxera/asistenteBasico.py) , un programa avanzando del [asistente sin text to speech](https://github.com/UzuRodri95/voiceProject/blob/main/nuxera/asistenteArchswtoTtS.py) y un [asistente completo](https://github.com/UzuRodri95/voiceProject/blob/main/nuxera/asistenteArchs.py)

Tambi茅n encontrar谩s una carpeta *model* que contiene el modelo en castellano de [vosk](https://alphacephei.com/vosk/models), el asistente b谩sico necesitar谩 ser ejecutado en castellano pero las otras versiones no requieren de esa versi贸n del modelo y pueden utilizar cualquier otro, diponible en la documentaci贸n de [vosk](https://alphacephei.com/vosk/models).

## Instalaci贸n 馃敡

A continuaci贸n se indican los pasos para la instalaci贸n de un proyecto. Cada proyecto cuenta con un script 煤nico de instalaci贸n de dependencias:

Pasos para su ejecuci贸n

## 禄Nuxera, un asistente b谩sico de voz para GNU/Linux.

* Instalaci贸n de dependencias

```Bash
> chmod +x install.sh
> sudo ./installNuxera.sh
```

* Una vez instaladas las dependencias, simplemente ejecuta con Python 3 el programa deseado:

```Bash 
> python3 asistenteArch.py
```
* Por 煤ltimo, asegurate de tener la carpeta *model* en el mismo directorio del programa, la puedes encontrar en la carpeta de cada proyecto o descargarla desde la documentaci贸n de [vosk](https://alphacephei.com/vosk/models), puedes elegir el idioma que desees y descargar el modelo de ese idioma.


## Uso de Nuxera 馃捇

Como hemos visto en la secci贸n anterior para ejecutar el programa hay que ejecutar la siguiente orden en el directorio del trabajo:

```Bash 
> python3 asistenteArch.py
```
Las versiones avanzadas cuentan con dos estados principales. La creaci贸n de *acciones* y la ejecuci贸n de estas.

### 驴C贸mo se crean las acciones?

Las acciones se pueden crear de dos formas. El

* Si no existe el fichero *acciones.txt* el programa al ser ejecutado normalmente crear谩 el fichero y ejecutar谩 el men煤 de creaci贸n de acciones. El men煤 tiene las siguientes partes.

    1) Acci贸n que el asistente espera oir. Este campo es obligatorio, hay que escribir exactamente la acci贸n que se quiere pronunciar, tildes inclu铆das.

    2) Acci贸n que se ejecutar谩 en Bash, esta acci贸n tiene que ser valida en el sistema que se ejecuta. Este campo, por lo tanto, es obligatorio.

    3) Contestaci贸n del asistente, este campo es opcional, en el caso del asistente con text to speech ser谩 el que se lea y imprima por pantalla, y en caso sin text to speech ser谩 solamente impreso por pantalla.

* La otra manera de entrar en la creaci贸n de acciones es con la flag *-i* o *--instructions*, esta flag permite a帽adir acciones, manteniendo las anteriores, desplega el mismo men煤 que en el caso anterior.

Una vez creadas las acciones el programa terminar谩 su ejecuci贸n listo para ejecutarse y tener una ejecuci贸n normal.

### Otras opciones 

Todas las versiones cuentan con la flag *-h* o *--help*, esta flag permite ver todas las opciones del programa, incluyendo las que otorga Vosk:

```Bash
> python3 asistenteArchs.py -h
usage: asistenteArchs.py [-h] [-l] [-f FILENAME] [-m MODEL_PATH] [-d DEVICE] [-r SAMPLERATE] [-i]

optional arguments:
  -h, --help            show this help message and exit
  -l, --list-devices    show list of audio devices and exit
  -f FILENAME, --filename FILENAME
                        audio file to store recording to
  -m MODEL_PATH, --model MODEL_PATH
                        Path to the model
  -d DEVICE, --device DEVICE
                        input device (numeric ID or substring)
  -r SAMPLERATE, --samplerate SAMPLERATE
                        sampling rate
  -i, --instructions    This flag is used to add instructions to the actions file
```
## Construido con 馃洜锔?

* [Vosk](https://alphacephei.com/vosk/) - La librer铆a de voz usada
* [Python 3](https://docs.python.org/3/) - El lenguaje de programaci贸n usado
* [PyTTS](https://pypi.org/project/pyttsx3/) - Modelo de text to speech offline.
* [gTTS](https://gtts.readthedocs.io/en/latest/) - Modelo de text to speech online.

Para m谩s dudas leer el [Readme](https://github.com/UzuRodri95/voiceProject) principal.
