cambiar a la versión en castellano [🇪🇸](https://github.com/UzuRodri95/voiceProject/blob/main/README.md)
# VoiceProject🔊                                   

VoiceProject is a project of the subject Interactive and Immersive Multimedia Systems (SMII in its acronym in Spanish), elective of the fourth year of Computer Engineering at the UPV. This project aims to be a demonstration of different uses of voice recognition and synthesis libraries 🔊.

## What can you find in this repo? 🚀
In this project you can find a basic wizard made with VOSK called [Nuxera](https://github.com/UzuRodri95/voiceProject/tree/main/nuxera), an automation to play with the voice of [SuperMario](https://github.com/UzuRodri95/voiceProject/tree/main/SuperMarioVoice) for SNES or an Eliza with voice among others.

### Pre requirements

These programs and their respective installation scripts are intended to be executed in Ubuntu 20.04 💻, therefore the operation in other distros or operating systems is not guaranteed, we invite you to make a pull-request adding the changes for your systems.

To get all the code, run the following command on your system:

```Bash
> git clone https://github.com/UzuRodri95/voiceProject
```

### Installation 🔧

The steps to install a project are shown below. Each project has a unique dependency install script:

Steps for its execution

### »Nuxera, a basic voice assistant for GNU / Linux.

* Dependency installation

```Bash
> chmod +x installNuxera.sh
> sudo ./installNuxera.sh
```

* Once the dependencies are installed, simply run the desired program with Python 3:

```Bash 
> python3 asistenteArch.py
```
	

* Finally, make sure you have the *model* folder in the same directory as the program, you can find it in each project folder or download it from the [vosk](https://alphacephei.com/vosk/models) documentation, You can choose the language you want and download the model of that language. The repository model is for Spanish. 

## Built with 🛠️

* [Vosk](https://alphacephei.com/vosk/) - The used voice library
* [Python 3](https://docs.python.org/3/) - The programming language used



## Authors ✒️


* **Sergio Benlloch**  - [sg1o](https://github.com/sg1o)
* **Álvaro Rodríguez**  - [UzuRodri95](https://github.com/UzuRodri95)
* **Dimitar Todorov** 

You can also look at the list of all [contributors](https://github.com/UzuRodri95/voiceProject/contributors) who have participated in this project.

## License 📄

This project is totally free, you can use it and modify it to your liking. For more details about the license read [LICENSE](https://github.com/UzuRodri95/voiceProject/blob/main/LICENSE)

## Contact  📫
If you want to get in touch with us you can do it through:
* serbenl1@inf.upv.es
