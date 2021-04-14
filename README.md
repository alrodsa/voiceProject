<p align="center">
  <img src="https://github.com/UzuRodri95/voiceProject/blob/main/images/logoVoice.png"/>
</p>

change to english version [🇬🇧](https://github.com/UzuRodri95/voiceProject/blob/main/README_en.md)
# VoiceProject 🔊

VoiceProject en un proyecto de la asignatura Sistemas multimedia interactivos e inmersivos (SMII), optativa de cuarto curso de Ingenieria Informatica de la UPV. Este proyecto pretende ser una demostración de diferentes usos de librerías de reconocimiento y síntesis de voz 🔊.

## ¿Qué puedes encontrar en este repo? 🚀

En este proyecto puedes encontrar un asistente básico hecho con VOSK llamado [Nuxera](https://github.com/UzuRodri95/voiceProject/tree/main/nuxera), una automatización para jugar con la voz de [SuperMario](https://github.com/UzuRodri95/voiceProject/tree/main/SuperMarioVoice) para SNES o un Eliza con voz entre otros.

### Pre-requisitos 📋

Estos programas y sus respectivos script de instalacion están destinados a ser ejecutados en Ubuntu 20.04 💻, por tanto no se asegura el funcionamiento en otras distros o sistemas operativos, os invitamos a hacer un pull-request añadiendo los cambios para vuestros sistemas.

Para hacerse con todo el código ejecuta la siguiente orden en tu sistema:

```Bash
> git clone https://github.com/UzuRodri95/voiceProject
```

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

### »Super Mario Voice, mítico juego de Super Mario World de la SNES pero jugado mediante voz. 🎮

<p align="center">
 <img src="https://github.com/UzuRodri95/voiceProject/blob/main/images/mario.gif" alt="drawing"/>
</p>
                         
* Instalación de dependencias y emulador snes9x:

```Bash
> chmod +x installSMV.sh
> sudo ./installSMV.sh
```

* Ejecución del juego:

```Bash 
> sh SuperMarioVoice.sh
```

## Construido con 🛠️

* [Vosk](https://alphacephei.com/vosk/) - La librería de voz usada
* [Python 3](https://docs.python.org/3/) - El lenguaje de programación usado
* [PyTTS](https://pypi.org/project/pyttsx3/) - Modelo de text to speech offline.
* [gTTS](https://gtts.readthedocs.io/en/latest/) - Modelo de text to speech online.



## Autores ✒️


* **Sergio Benlloch**  - [sg1o](https://github.com/sg1o)
* **Álvaro Rodríguez**  - [UzuRodri95](https://github.com/UzuRodri95)
* **Dimitar Todorov**  - [enmitko1](https://github.com/enmitko1)

También puedes mirar la lista de todos los [contribuyentes](https://github.com/UzuRodri95/voiceProject/contributors) que han participado en este proyecto. 

## Licencia 📄

Este proyecto es totalmente libre, puedes usarlo y modificarlo a tu gusto. Para mas detalles sobre la licencia lee [LICENSE](https://github.com/UzuRodri95/voiceProject/blob/main/LICENSE)

## Contacto 📫

Si quieres ponerte en contacto con nosotros puedes hacerlo a traves de:
* serbenl1@inf.upv.es
* alrodsa2@inf.upv.es
* ditodel@inf.upv.es
