# Super Mario Voice, mítico juego de Super Mario World de la SNES pero jugado mediante voz.
<p align="center">
 <img src="https://github.com/UzuRodri95/voiceProject/blob/main/images/mario.gif" alt="drawing"/>
</p>

##  Contenido 📋

   - Archivo de [instalacion] (https://github.com/alrodsa/voiceProject/blob/main/SuperMarioVoice/installSMV.sh).
   - Archivo de [ejecucion] (https://github.com/alrodsa/voiceProject/blob/main/SuperMarioVoice/SuperMarioVoice.sh) que hace uso del resto de directorios y archivos.

## Instalación 🔧

A continuación se indican los pasos para la instalación de un proyecto. Cada proyecto cuenta con un script único de instalación de dependencias:

Pasos para su ejecución

## »Nuxera, un asistente básico de voz para GNU/Linux.

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


## Uso de Nuxera 💻

Como hemos visto en la sección anterior para ejecutar el programa hay que ejecutar la siguiente orden en el directorio del trabajo:

```Bash 
> python3 asistenteArch.py
```
Las versiones avanzadas cuentan con dos estados principales. La creación de *acciones* y la ejecución de estas.

### ¿Cómo se crean las acciones?

Las acciones se pueden crear de dos formas. El

* Si no existe el fichero *acciones.txt* el programa al ser ejecutado normalmente creará el fichero y ejecutará el menú de creación de acciones. El menú tiene las siguientes partes.

    1) Acción que el asistente espera oir. Este campo es obligatorio, hay que escribir exactamente la acción que se quiere pronunciar, tildes incluídas.

    2) Acción que se ejecutará en Bash, esta acción tiene que ser valida en el sistema que se ejecuta. Este campo, por lo tanto, es obligatorio.

    3) Contestación del asistente, este campo es opcional, en el caso del asistente con text to speech será el que se lea y imprima por pantalla, y en caso sin text to speech será solamente impreso por pantalla.

* La otra manera de entrar en la creación de acciones es con la flag *-i* o *--instructions*, esta flag permite añadir acciones, manteniendo las anteriores, desplega el mismo menú que en el caso anterior.

Una vez creadas las acciones el programa terminará su ejecución listo para ejecutarse y tener una ejecución normal.

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
## Construido con 🛠️

* [Vosk](https://alphacephei.com/vosk/) - La librería de voz usada
* [Python 3](https://docs.python.org/3/) - El lenguaje de programación usado
* [PyTTS](https://pypi.org/project/pyttsx3/) - Modelo de text to speech offline.
* [gTTS](https://gtts.readthedocs.io/en/latest/) - Modelo de text to speech online.

Para más dudas leer el [Readme](https://github.com/UzuRodri95/voiceProject) principal.
