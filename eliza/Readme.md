# Eliza, un bot con voz
<p align="center">
 <img src="https://github.com/UzuRodri95/voiceProject/blob/main/images/eliza.png" alt="drawing"/>
</p>

##  Contenido 📋

En esta parte del proyecto podrás encontrar por una parte, dos implementaciones de Eliza con entrada en modo texto y otra con un eliza completamente en voz, contando con Speech Recognition con Vosk y text to speech con gTTS y pyTTSx.

También puedes encontrar un script de instalación de todas las dependencias para facilitar su prueba.

## Instalación 🔧

* Instalación de dependencias

```Bash
> chmod +x install.sh
> sudo ./install.sh
```

* Una vez instaladas las dependencias, simplemente ejecuta con Python 3 el programa deseado:

```Bash 
> python3 elizaSpeechRec.py 
```

* Por último, asegurate de tener la carpeta *model* en el mismo directorio del programa, la puedes encontrar en la carpeta de cada proyecto o descargarla desde la documentación de [vosk](https://alphacephei.com/vosk/models), puedes elegir el idioma que desees y descargar el modelo de ese idioma.


## »Eliza, un bot de voz para GNU/Linux.

Eliza fue una idea surgida en los 60, donde se pretendía crear un bot capaz de hacer de psicólogo con una persona, empatizar con ella sin importar que sea un software. Con esta implementación pretendemos acercar más el Eliza con voz realista gracias a gTTS y con reconocimiento de voz para ayudar aún más al acercamiento.

Hemos usado los Eliza creados por [jezhiggins](https://github.com/jezhiggins/eliza.py/blob/main/eliza.py) y la implementación en Castellano con Python 2 de [Marco Baturan](https://github.com/marcobaturan/Eliza/blob/master/simphaty.py) , con esto nos hemos preocupado de crear la interfaz de voz de este Eliza. También hemos decidido implementar dos opciones, sólo context to speech y con text to speech y speech recognition, para poder así facilitar las diferentes pruebas.
## Uso de Eliza 💻

Cualquiera de las opciones de ELiza se puede ejecutar con la siguiente linea:

```Bash 
> python3 elizaSpeechRec.py 
```

Pero, antes de nada, asegurar de tener el modelo de vosk y el programa de text to speech en el mismo directorio.
## Construido con 🛠️

* [Vosk](https://alphacephei.com/vosk/) - La librería de voz usada
* [Python 3](https://docs.python.org/3/) - El lenguaje de programación usado
* [PyTTS](https://pypi.org/project/pyttsx3/) - Modelo de text to speech offline.
* [gTTS](https://gtts.readthedocs.io/en/latest/) - Modelo de text to speech online.

Para más dudas leer el [Readme](https://github.com/alrodsa/voiceProject) principal.