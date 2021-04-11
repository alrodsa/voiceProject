#!/usr/bin/env python3

import argparse
import os
import queue
import sounddevice as sd
import vosk
import sys
from time import sleep
from subprocess import call
from tqdm import tqdm
import keyboard

q = queue.Queue()

'''
    Creamos un diccionario para ir guardando las palabras como clave
    por defecto el valor será 0 ya que de moento no nos interesa
'''
dictPalabras = {}

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

parser = argparse.ArgumentParser(add_help=False)
parser.add_argument(
    '-l', '--list-devices', action='store_true',
    help='show list of audio devices and exit')
args, remaining = parser.parse_known_args()
if args.list_devices:
    print(sd.query_devices())
    parser.exit(0)
parser = argparse.ArgumentParser(
    description=__doc__,
    formatter_class=argparse.RawDescriptionHelpFormatter,
    parents=[parser])
parser.add_argument(
    '-f', '--filename', type=str, metavar='FILENAME',
    help='audio file to store recording to')
parser.add_argument(
    '-m', '--model', type=str, metavar='MODEL_PATH',
    help='Path to the model')
parser.add_argument(
    '-d', '--device', type=int_or_str,
    help='input device (numeric ID or substring)')
parser.add_argument(
    '-r', '--samplerate', type=int, help='sampling rate')
args = parser.parse_args(remaining)

'''
    Filtramos la cadena que nos venga del microfono introduciendo las palabras
    en el diccionario
'''
def filtrarPartialSpeech(partial_speech):
    partial_speech = partial_speech.replace("\"","").replace("{","").replace("}","").replace("partial : ","").replace("\n","");
    partial_speech = partial_speech.split(' ')
    for palabra in partial_speech:
        if palabra != '':
            dictPalabras[palabra] = 0
            print(dictPalabras)
    return partial_speech

'''
    Vamos a pasarle un array con las palabras para ver si le corresponde una accion
'''
def realizarAccion(speech):
    cabecera()
    print(speech)
    
    for s in speech:
        if 'aceptar' in s or 'acepta' in s or 'ok' in s:
            print("-> ACEPTAR")
            keyboard.press('x')
            sleep(0.5)
            keyboard.release('x')

        if 'saltar' == s or 'salta' == s:
            print("-> SALTAR")
            sleep(0.5)
            keyboard.press('x')
            sleep(0.5)
            keyboard.release('x')

        if 'derecha' in s:
            if keyboard.is_pressed('left arrow'):
                keyboard.release('left arrow')
            print("-> DERECHA")
            sleep(0.5)
            keyboard.press('right arrow')

        if 'parar' in s or 'para' in s:
            print("-> PARAR")

            if keyboard.is_pressed('right arrow'):
                keyboard.release('right arrow')

            if keyboard.is_pressed('left arrow'):
                keyboard.release('left arrow')

        if 'izquierda' in s:
            if keyboard.is_pressed('right arrow'):
                keyboard.release('right arrow')
                print("-> IZQUIERDA")
            sleep(0.5)
            keyboard.press('left arrow')

        if 'correr' in s or 'corre' in s:
            print("-> CORRER")
            sleep(0.5)
            if keyboard.is_pressed('a'):
                keyboard.release('a')
            keyboard.press('a')

def cabecera():
    os.system('clear')
        
    print('='*52)
    print('='*14,'MarioVoiceProject v1.0','='*14)
    print('='*52)


try:
    cabecera()
    for i in tqdm(range(100)):
        sleep(0.05)

    if args.model is None:
        args.model = "model"
    if not os.path.exists(args.model):
        print ("Please download a model for your language from https://alphacephei.com/vosk/models")
        print ("and unpack as 'model' in the current folder.")
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

    with sd.RawInputStream(samplerate=args.samplerate, blocksize = 800, device=args.device, dtype='int16',
                            channels=1, callback=callback):

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

except Exception as e:
    parser.exit(type(e).__name__ + ': ' + str(e))
