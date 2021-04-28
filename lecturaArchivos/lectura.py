import os
import sys
import signal
from text_to_speech import text_to_speech



def signal_handler(key, frame):
	print("\n\n[*] Cerrando...\n")
	sys.exit(1)

signal = signal.signal(signal.SIGINT, signal_handler)

def lectura_pdf(nom_archs):

    tipo = nom_archs.split('.')

    if tipo[len(tipo) - 1] != 'txt' and tipo[len(tipo) - 1] != 'pdf':
        print('Detectado tipo de archivo diferente al esperado,')
        print('no te aseguremos que el programa funcione : )')

    if tipo[len(tipo) - 1] == 'pdf':
        os.system("pdftotext " + nom_archs + " " + ".salidaAux.txt")
        nom_archs = ".salidaAux.txt"   

    file = open(nom_archs, 'r')
    frase= ''

    for line in file:
        if '\n' != line:
            for x in range(0, len(line)):
                if line[x] == '.' and line[x+1] == ' ':
                    print(frase, end='')
                    text_to_speech(frase)
                    frase = ''
                frase += line[x]


    if frase != '' or frase == ' ':
                    print(frase, end='')
                    text_to_speech(frase)
                    
    print ("Terminamos aquí")

def main():
    print('='*52)
    print('-'*6, 'La lectura de tu archivo va a empezar ', '-'*6)
    print('='*52)
    print()
    lectura_pdf(sys.argv[1])

if __name__ == "__main__":
    main()