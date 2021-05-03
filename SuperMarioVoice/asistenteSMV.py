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
feedback = False

if len(sys.argv) == 2 and sys.argv[1] == '-fe':
    feedback = True

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
    return partial_speech

'''
    Vamos a pasarle un array con las palabras para ver si le corresponde una accion
'''
def realizarAccion(speech):    
    for s in speech:
        if 'aceptar' in s or 'acepta' in s:
            if feedback:
                print("-> ACEPTAR")
            keyboard.press('c')
            sleep(0.1)
            keyboard.release('c')
        
        if 'ok' in s:
            if feedback:
                print("-> OKAY")
            keyboard.press('x')
            sleep(0.1)
            keyboard.release('x')
        
        if 'iniciar' in s or 'inicia' in s:
            if feedback:
                print("-> INICIAR")
            keyboard.press('enter')
            sleep(0.1)
            keyboard.release('enter')

        if 'saltar' == s or 'salta' == s or 'saltas' == s or 'salto' == s or 'saltos' == s:
            if feedback:
                print("-> SALTAR")
            sleep(0.5)
            keyboard.press('c')
            sleep(0.5)
            keyboard.release('c')

        if 'derecha' in s or'derechas' in s :
            if keyboard.is_pressed('left arrow'):
                keyboard.release('left arrow')
            if feedback:
                print("-> DERECHA")
            sleep(0.5)
            keyboard.press('right arrow')
            sleep(0.1)
        
        if 'arriba' in s or 'sube' in s or 'subir' in s :
            keyboard.press('up arrow')
            if feedback:
                print("-> ARRIBA")
            sleep(0.2)
            keyboard.release('up arrow')
            sleep(0.1)
        
        if 'abajo' in s or 'bajo' in s or 'baja' in s or 'bajar' in s :
            keyboard.press('down arrow')
            if feedback:
                print("-> ABAJO")
            sleep(0.2)
            keyboard.release('down arrow')
            sleep(0.1)

        if 'parar' in s or 'para' in s:
            if feedback:
                print("-> PARAR")
            sleep(0.1)
            if keyboard.is_pressed('right arrow'):
                keyboard.release('right arrow')
            if keyboard.is_pressed('left arrow'):
                keyboard.release('left arrow')
            sleep(0.1)

        if 'izquierda' in s:
            if keyboard.is_pressed('right arrow'):
                keyboard.release('right arrow')
            if feedback:
                print("-> IZQUIERDA")
            sleep(0.5)
            keyboard.press('left arrow')
            sleep(0.1)

        if 'correr' in s or 'corre' in s:
            if feedback:
                print("-> CORRER")
            sleep(0.5)
            if keyboard.is_pressed('s'):
                if feedback:
                    print("ESTA PRESIONADA")
                sleep(0.1)
                keyboard.release('s')
            else:
                keyboard.press('s')
            sleep(0.1)
        cabecera()

def cabecera():
    os.system('clear')
        
    print('###########################################################################                       `-:/:-`                ')
    print('####################### MarioVoiceProject v1.0 ############################                    ./oyyyo://-               ')
    print('###########################################################################                 .+syyyyy++--//              ')
    print(' ==========================================================================                 /syhhhyyyyo++os/:.           ')
    print('|        ACCION        ||                  COMANDO VOZ                     |             `.+yhhhhyyyhdyyyhdhhh-          ')
    print(' ==========================================================================             `oyhddddyyydysy//syyo-           ')
    print('|ACEPTAR en menu/nivel || "aceptar"/"okay"                                 |            `yhhmmmdo+::s+--.+.              ')
    print('---------------------------------------------------------------------------              -:/ohdds:-:hy.:/:-..`           ')
    print('|IR DERECHA            || "derecha"/"derechas"                             |             --+oshh:-:hdyyho+:--.           ')
    print('---------------------------------------------------------------------------           ``.-//+oo////oshmmmhys+  ``        ')
    print('|IR IZQUIERDA          || "izquierda"/"izquierdas"                         |       ```-syyyyyysyso++///+oo+-./..:-.`     ')
    print('---------------------------------------------------------------------------      ``   `.syhhyyyyyhhyso+/:.` :soos+:.`    ')
    print('|IR ARRIBA             || "arriba"/"sube"/"subir"                          |`--.```   `---:hddhhyyhyhhdy++syso+oyy+:.    ')
    print('---------------------------------------------------------------------------  :++/-.....    yhhhyyyyyssyhhhdddo/oo+/.     ')
    print('|IR ABAJO              || "abajo"/"bajo"/"baja"/"bajar"                    |  .os+:-o:`   -hhhhhyyyy--yy+sso/:..         ')
    print('---------------------------------------------------------------------------     `-+ss+`  .shhhhhhyyhhyys.                ')
    print('|SALTAR                || "saltar"/"salta"/"saltas"/"saltos"/"salto"       |    .shddmh/-+hddhhhhhhhhhho                 ')
    print('---------------------------------------------------------------------------    -shhdmmmddyddddhhhhyyyyy/                 ')
    print('|CORRER                || "corre"/"correr"                                 |  -shhhdmmmmmmdddmddhhhhyyyyys.              ')
    print('---------------------------------------------------------------------------  `yhhhhmmmmmmmmmmmdmmdddhhhyyys.`-//:.       ')
    print('|PARAR                 || "para"/"parar"                                   |  -syyo.``-/+ssso/-.:oydddhhyyyyhyss+o/      ')
    print('---------------------------------------------------------------------------                        .hddhhyhhhhyysyo      ')
    print('                                                                           |                       .hddhhhhhhhhy:       ')
    print('==================== CLICKA EN LA PANTALLA DEL EMULADOR ===================                          `yddddddhs:`        ')
    print('                                                                                                      `sdddh+`           ')
    print('                                                                                                        .::`             ')

    if feedback:
        print('-----------------------> FEEDBACK ACTIVADO <------------------------')



try:
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
            cabecera()

            while True:
                data = q.get()
                if rec.AcceptWaveform(data):
                    #os.system('clear')
                    '''Cuando el speech parcial termine, vendra aqui'''
                    speech = rec.Result()

                    '''
                        Sacamos las palabras del diccionario y las pasamos 
                        a la funcion para realizar alguna funcion
                    '''
                    palabras = dictPalabras.keys()
                    realizarAccion(palabras)

                    '''Borramos el diccionario para escuchar la nueva entrada'''
                    dictPalabras.clear()
                else:
                    '''Aqui vamos metiendo palabras del speech parcial'''
                    partial_speech = rec.PartialResult()
                    filtrarPartialSpeech(partial_speech)

                if dump_fn is not None:
                    dump_fn.write(data)

except Exception as e:
    print("[*] Saliendo ...")
    parser.exit(type(e).__name__ + ': ' + str(e))
