import subprocess, platform
from gtts import gTTS
import os
import pyttsx3

#Funcion principal
def text_to_speech(texto):
    #hay_web = pingOk("google.es");
    
    #para pruebas con pyttsx
    hay_web = pingOk("no_hay_web.es")
    
    if (hay_web):
        speech_google(texto)
    else:
        speech_pyttsx(texto)

#Funcion para comprobar si hay conexión
def pingOk(sHost):
    try:
        output = subprocess.check_output("ping -{} 1 {}".format('n' if platform.system().lower()=="windows" else 'c', sHost), shell=True)

    except Exception:
        print("No hay conexión.")
        return False

    print("Hay conexión.")
    return True


#Funcion para convertir texto a voz con libreria Gtts de Google
def speech_google(texto):
    
    tts = gTTS(texto, lang = 'es', tld= 'es')
    tts.save("speaked.mp3")
    playsound("speaked.mp3")
    #Para borrar el archivo que ha creado Gtts
    os.remove("speaked.mp3")
    

#Funcion para convertir texto a voz con libreria pyttsx
def speech_pyttsx(texto):
    
    engine = pyttsx3.init()
    engine.setProperty('voice', "spanish")
    engine.say(texto)
    engine.runAndWait();
    
#Para probar la función    
text_to_speech("Vamos a hablar un poquito")
