# Super Mario Voice, m铆tico juego de Super Mario World de la SNES pero jugado mediante voz.
<p align="center">
 <img src="https://github.com/UzuRodri95/voiceProject/blob/main/images/mario.gif" alt="drawing"/>
</p>

## 馃搵 Contenido 馃搵

   - Archivo de [instalacion](https://github.com/alrodsa/voiceProject/blob/main/SuperMarioVoice/installSMV.sh).
   - Archivo de [ejecucion](https://github.com/alrodsa/voiceProject/blob/main/SuperMarioVoice/SuperMarioVoice.sh) que hace uso del resto de directorios y archivos.

## 馃敡 Instalaci贸n 馃敡
* Instalaci贸n de dependencias y emulador snes9x:
```Bash
> chmod +x installSMV.sh
> sudo sh installSMV.sh
```

## 馃暪 Ejecuci贸n 馃暪 
Para la ejecuci贸n de Super Mario Voice nos encontramos con 2 posibles formas de realizarlo:

1. Ejecuci贸n normal del juego:
```Bash 
> sudo sh SuperMarioVoice.sh
```

2. Ejecuci贸n con feedback:
 ```Bash 
> sudo sh SuperMarioVoice.sh -fe
```
[NOTA 1] El modo feedback hace que te muestre por pantalla los comandos que se han reconocido y que se est谩n ejecutando. Este modo puede ralentizar el reconocimiento de voz y la ejecuci贸n de los comandos.

<p align="center">
 <img src="https://github.com/UzuRodri95/voiceProject/blob/main/images/mario_ejecucion.png" alt="drawing"/>
</p>

[NOTA 2] El foco de la ejecuci贸n tiene que estar en la pantalla del emulador, es decir, es necesario clickar en la pantalla del emulador para 
poder jugar.


## 馃捇 Acciones Super Mario Voice 馃捇
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

## 馃洜锔? Construido con 馃洜锔?
* [Vosk](https://alphacephei.com/vosk/) - La librer铆a de voz usada
* [Python 3](https://docs.python.org/3/) - El lenguaje de programaci贸n usado
* [Snes9x](https://www.snes9x.com/) - Emulador de la SNES.

Para m谩s dudas leer el [Readme](https://github.com/alrodsa/voiceProject) principal.

Para este proyecto es necesario tener en un directorio junto al proyecto un directorio rom/ con la rom de Super Mario World llamada como rom.sfc:
    /rom/rom.sfc
