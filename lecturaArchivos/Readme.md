# Lectura de archivos 📚

##  Contenido 📋

En esta parte del proyecto encontrarás un pequeño programa caaz de leerte documentos pdf y txt, mostrandote lo que se este leyendo por pantalla.


## Instalación 🔧

* Instalación de dependencias

```Bash
> chmod +x install.sh
> sudo ./install.sh
```

* Una vez instaladas las dependencias, simplemente ejecuta con Python 3 el programa deseado:

```Bash 
> python3 lectura.py 
```

* Por último, asegurate de tener la carpeta *model* en el mismo directorio del programa, la puedes encontrar en la carpeta de cada proyecto o descargarla desde la documentación de [vosk](https://alphacephei.com/vosk/models), puedes elegir el idioma que desees y descargar el modelo de ese idioma.
  

## Uso de la lectura de archivos 💻

Cualquiera de las opciones de ELiza se puede ejecutar con la siguiente linea:

```Bash 
> python3 lectura.py 
```

Pero, antes de nada, asegurarse de tener el modelo de vosk y el programa de text to speech en el mismo directorio.
## Construido con 🛠️

* [Python 3](https://docs.python.org/3/) - El lenguaje de programación usado
* [PyTTS](https://pypi.org/project/pyttsx3/) - Modelo de text to speech offline.
* [gTTS](https://gtts.readthedocs.io/en/latest/) - Modelo de text to speech online.
* [pdftotext](https://pdftotext.com/es/) - Programa que nos facilita la lectura de pdfs.

Para más dudas leer el [Readme](https://github.com/alrodsa/voiceProject) principal.