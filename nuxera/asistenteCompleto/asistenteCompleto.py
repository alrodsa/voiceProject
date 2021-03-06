#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#Esta es la version del asistente avanzada
#con text to speech

import argparse
import os
import queue
from typing import OrderedDict
import sounddevice as sd
import vosk
import sys
from time import sleep
from subprocess import call
from tqdm import tqdm
from text_to_speech import text_to_speech

q = queue.Queue()

'''
    Creamos un diccionario para ir guardando las palabras como clave
    por defecto el valor será 0 ya que de moento no nos interesa
'''
dictPalabras = {}

'''
    Creamos el vector para almacenar toda la informacion de las acciones
'''
acciones = []


def int_or_str(text):
    """Helper function for argument parsing."""
    try:
        return int(text)
    except ValueError:
        return text


def callback(indata, frames, time, status):
    """This is called (from a separate thread) for each audio block."""
    if status:
        print(status, file=sys.stderr)
    q.put(bytes(indata))

'''
    Definiendo flags para el programa
'''

parser = argparse.ArgumentParser(add_help=False)
parser.add_argument(
    '-l', '--list-devices', action='store_true',
    help='show list of audio devices and exit')    
args, remaining = parser.parse_known_args()
if args.list_devices:
    print(sd.query_devices())
    parser.exit(0)
parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter, parents=[parser])
parser.add_argument('-f', '--filename', type=str, metavar='FILENAME', help='audio file to store recording to')
parser.add_argument('-m', '--model', type=str, metavar='MODEL_PATH', help='Path to the model')
parser.add_argument('-d', '--device', type=int_or_str, help='input device (numeric ID or substring)')
parser.add_argument('-r', '--samplerate', type=int, help='sampling rate')
parser.add_argument( '-i', '--instructions', action='store_true', help =  "This flag is used to add instructions to the actions file")
args = parser.parse_args(remaining)
'''
    Filtramos la cadena que nos venga del microfono introduciendo las palabras
    en el diccionario
'''

def filtrarPartialSpeech(partial_speech):
    partial_speech = partial_speech.replace("\"", "").replace(
        "{", "").replace("}", "").replace("partial : ", "").replace("\n", "")
    partial_speech = partial_speech.split(' ')
    for palabra in partial_speech:
        if palabra != '':
            dictPalabras[palabra] = 0
            #print(dictPalabras)
    return partial_speech


def realizarAccion(speech):
    cabecera()
    continuar = False
    for vector in acciones:
        frase = vector[0].split(' ')
        for palabra in frase:
            if palabra in speech:
                continuar = True
            else:
                continuar = False
                break

        if continuar:
            os.system(vector[1])
            texto = vector[2]
            print(texto)
            if texto:
                text_to_speech(texto)
        continuar = False

    sleep(1)


def rellenar():
    file = open("./acciones.txt", "r")
    print()
    print('-'*15, 'Rellenando  acciones', '-'*15)
    print()
    for vector in file:
        print("-", end='')
        acciones.append(vector.split('; '))

def cabecera():
    os.system('clear')

    print('='*52)
    print('='*12, 'NUXERA, TU ASISTENTE LINUX', '='*12)
    print('='*52)


def start():
    os.system('clear')
    cabecera()
    print('-'*52)
    print(" \n    Ahora se te van a indicar los pasos para\n    conseguir crear una instrucción completa\n")
    print('-'*52)
    sleep(2)
    file = open("./acciones.txt", "a")
    seguir = True
    while seguir:
        os.system('clear')
        cabecera()
        while(1):
            print("\nEscribe lo que le quieras decir al asistente para ejecutar la orden,\neste campo es obligatorio.")
            print('->', end='')
            orden = input()
            if orden == '':
                print('Este campo es obligatorio')
            else: break;
        
        sleep(1)
        while(1):
            print("\nEscribe la orden que se va a ejecutar, recuerda que se va a ejcutar en Bash\ny es un campo obligatorio.")
            print('->', end='')
            accion = input()
            if accion == '':
                print('Este campo es obligatorio')
            else: break;

            
        sleep(1)
        print("\nEscribe lo que quieres que se muestre por pantalla al realizar la acción o pulsa [ENTER].")
        print('->', end='')
        contestacion = input()
        sleep(1)
        file.write(orden.lower() + '; ' + accion.lower() + '; ' + contestacion + '; \n')
        sleep(1)
        print("\n¿Quieres añadir otra acción?[y/n]", end='')
        yesNo = input()
        if yesNo == 'n':
            file.close()
            exit(0)


        
        
def main():
    try:
        cabecera()
        if not os.path.isfile("acciones.txt") or args.instructions:
            start()
        rellenar()

        for i in tqdm(range(100)):
            sleep(0.05)

        if args.model is None:
            args.model = "model"
        if not os.path.exists(args.model):
            print("Please download a model for your language from https://alphacephei.com/vosk/models")
            print("and unpack as 'model' in the current folder.")
            parser.exit(0)
        if args.samplerate is None:
            device_info = sd.query_devices(args.device, 'input')
            # soundfile expects an int, sounddevice provides a float:
            args.samplerate = int(device_info['default_samplerate'])

        model = vosk.Model(args.model)

        if args.filename:
            dump_fn = open(args.filename, "wb")
        else:
            dump_fn = None

        with sd.RawInputStream(samplerate=args.samplerate, blocksize=8000, device=args.device, dtype='int16',
                                channels=1, callback=callback):
            print('#' * 80)
            print('Teclea Ctrl+C para parar la ejecución')
            print('#' * 80)
            sleep(1)

            rec = vosk.KaldiRecognizer(model, args.samplerate)
            os.system('clear')

            while True:
                cabecera()
                data = q.get()
                if rec.AcceptWaveform(data):
                    os.system('clear')
                    '''Cuando el speech parcial termine, vendra aqui'''
                    speech = rec.Result()

                    '''
                            Sacamos las palabras del diccionario y las pasamos 
                            a la funcion para realizar alguna funcion
                        '''
                    palabras = dictPalabras.keys()
                    realizarAccion(palabras)

                    '''Borramos el diccionario para escucharl la nueva entrada'''
                    dictPalabras.clear()
                else:
                    '''Aqui vamos metiendo palabras del speech parcial'''
                    partial_speech = rec.PartialResult()
                    filtrarPartialSpeech(partial_speech)

                if dump_fn is not None:
                    dump_fn.write(data)


    except KeyboardInterrupt:
        print('\n[*]Cerrando')
        parser.exit(0)
    except Exception as e:
        parser.exit(type(e).__name__ + ': ' + str(e))

if __name__ == "__main__":
    main()