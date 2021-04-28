# Super Mario Voice, mítico juego de Super Mario World de la SNES pero jugado mediante voz.
<p align="center">
 <img src="https://github.com/UzuRodri95/voiceProject/blob/main/images/mario.gif" alt="drawing"/>
</p>

## 📋 Contenido 📋

   - Archivo de [instalacion] (https://github.com/alrodsa/voiceProject/blob/main/SuperMarioVoice/installSMV.sh).
   - Archivo de [ejecucion] (https://github.com/alrodsa/voiceProject/blob/main/SuperMarioVoice/SuperMarioVoice.sh) que hace uso del resto de directorios y archivos.

## 🔧 Instalación 🔧
* Instalación de dependencias y emulador snes9x:
```Bash
> chmod +x installSMV.sh
> sudo sh installSMV.sh
```

## 🕹 Ejecución 🕹 
Para la ejecución de Super Mario Voice nos encontramos con 2 posibles formas de realizarlo:

1. Ejecución normal del juego:
```Bash 
> sudo sh SuperMarioVoice.sh
```

2. Ejecución con feedback:
 ```Bash 
> sudo sh SuperMarioVoice.sh -fe
```
[NOTA 1] El modo feedback hace que te muestre por pantalla los comandos que se han reconocido y que se están ejecutando. Este modo puede ralentizar el reconocimiento de voz y la ejecución de los comandos.

<p align="center">
 <img src="https://github.com/UzuRodri95/voiceProject/blob/main/images/mario_ejecucion.png" alt="drawing"/>
</p>

[NOTA 2] El foco de la ejecución tiene que estar en la pantalla del emulador, es decir, es necesario clickar en la pantalla del emulador para 
poder jugar.


## 💻 Acciones Super Mario Voice 💻
Las acciones que se pueden realizar con la voz son los siguientes:

 | ACCIONES | COMANDO DE VOZ |
 | -- | -- |
 |ACEPTAR en menu/nivel | "aceptar"/"okay"|
 |IR DERECHA            | "derecha"/"derechas"|
 |IR IZQUIERDA          | "izquierda"/"izquierdas"|
 |IR ARRIBA             | "arriba"/"sube"/"subir"|
 |IR ABAJO              | "abajo"/"bajo"/"baja"/"bajar"|
 |SALTAR                | "saltar"/"salta"/"saltas"/"saltos"/"salto"|
 |CORRER                | "corre"/"correr"|
 |PARAR                 | "para"/"parar"|                                  |

## 🛠️ Construido con 🛠️
* [Vosk](https://alphacephei.com/vosk/) - La librería de voz usada
* [Python 3](https://docs.python.org/3/) - El lenguaje de programación usado
* [Snes9x](https://www.snes9x.com/) - Emulador de la SNES.

Para más dudas leer el [Readme](https://github.com/alrodsa/voiceProject) principal.
