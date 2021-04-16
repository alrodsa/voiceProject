import os
#import subprocess, platform
#from gtts import gTTS
#import pyttsx3
from text_to_speech import text_to_speech

def lectura_pdf(nom_pdf, nom_arch_sal):

#nom_arch_sal = ""
#nom_pdf = ""

    os.system("pdftotext " + nom_pdf + " " + nom_arch_sal)

    print ("*** Empezamos la lectura ***")
    datos2 = []
    with open(nom_arch_sal) as fname:
        for lineas in fname:
            datos2.extend(lineas.split())
            #print ("i" , datos2)
    #print (datos2)
    
    for palabra in datos2:
        text_to_speech(palabra)
    
    print ("Terminamos aquí")
    
    os.remove(nom_arch_sal)


lectura_pdf("un_arch.pdf", "pdf_en_txt.txt")
