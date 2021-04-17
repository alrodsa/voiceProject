import os
import sys
import signal
from text_to_speech import text_to_speech

#TODO: accept txt directly and chose pdftotext automatically

def signal_handler(key, frame):
	print("\n\n[*] Cerrando 1...\n")
	sys.exit(1)

def signal_handler(key, frame):
	print("\n\n[*] Cerrando...\n")
	sys.exit(1)

signal = signal.signal(signal.SIGINT, signal_handler)

def lectura_pdf(nom_pdf, nom_arch_sal):

    os.system("pdftotext " + nom_pdf + " " + nom_arch_sal)

    print ("*** Empezamos la lectura ***")
    datos2 = []
    file = open(nom_arch_sal, 'r')

    for line in file:
        print(line, end='')
        if ('\n' != line):
            text_to_speech(str(line))
    print ("Terminamos aquí")
        
    os.remove(nom_arch_sal)

def main():
    lectura_pdf(sys.argv[1], ".salidaAux.txt")

if __name__ == "__main__":
    main()