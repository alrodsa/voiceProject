#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# ----------------------------------------------------------------------
#  eliza.py
#
# Eliza hecho a partir de la version en inglés de jezhiggins y de la versión en castellano en python2 de marcobaturan
# la version en inglés se puede encontrar en https://github.com/jezhiggins/eliza.py/blob/main/eliza.py
# y la de castellano en https://github.com/marcobaturan/Eliza/blob/master/simphaty.py 
# ----------------------------------------------------------------------

import signal
import sys
import re
import random
import subprocess, platform
from gtts import gTTS
import os
import pyttsx3


def signal_handler(key, frame):
	print("\n\n[*] Cerrando...\n")
	sys.exit(1)

signal = signal.signal(signal.SIGINT, signal_handler)

class Eliza:
    def __init__(self):
        self.keys = list(map(lambda x: re.compile(x[0], re.IGNORECASE), gPats))
        self.values = list(map(lambda x: x[1], gPats))

    # ----------------------------------------------------------------------
    # translate: take a string, replace any words found in vocabulary.keys()
    #  with the corresponding vocabulary.values()
    # ----------------------------------------------------------------------
    def translate(self, text, vocabulary):
        words = text.lower().split()
        keys = vocabulary.keys()
        for i in range(0, len(words)):
            if words[i] in keys:
                words[i] = vocabulary[words[i]]
        return ' '.join(words)

    # ----------------------------------------------------------------------
    #  respond: take a string, a set of regexps, and a corresponding
    #    set of response lists; find a match, and return a randomly
    #    chosen response from the corresponding list.
    # ----------------------------------------------------------------------
    def respond(self, text):
        # find a match among keys
        for i in range(0, len(self.keys)):
            match = self.keys[i].match(text)
            if match:
                # found a match ... stuff with corresponding value
                # chosen randomly from among the available options
                resp = random.choice(self.values[i])
                # we've got a response... stuff in reflected text where indicated
                pos = resp.find('%')
                while pos > -1:
                    num = int(resp[pos+1:pos+2])
                    resp = resp[:pos] + \
                        self.translate(match.group(num), gReflections) + \
                        resp[pos+2:]
                    pos = resp.find('%')
                # fix munged punctuation at the end
                if resp[-2:] == '?.':
                    resp = resp[:-2] + '.'
                if resp[-2:] == '??':
                    resp = resp[:-2] + '?'
                return resp
        return None


# ----------------------------------------------------------------------
# gReflections, a translation table used to convert things you say
#    into things the computer says back, e.g. "I am" --> "you are"
# ----------------------------------------------------------------------
gReflections = {
    "estoy": "estas",
    "soy": "eres",
    "fui": "fuiste",
    "yo": "tu",
    "deberia": "deberias",
    "tengo": "tendriass",
    "quiero": "quieres",
    "mio": "tuyo",
    "eres": "soy",
    "tu tienes": "yo tengo",
    "tu seras": "yo sere",
    "tuyo": "mio",
    "vuestro": "nuestro",
    "sobre ti": "sobre mi",
    "sobre mi": "sobre ti"
}

# ----------------------------------------------------------------------
# gPats, the main response table.  Each element of the list is a
#  two-element list; the first is a regexp, and the second is a
#  list of possible responses.
# ----------------------------------------------------------------------
gPats = [
    [r'necesito(.*)',
        ["¿Por qué necesitas eso",
        "¿Realmente te ayudaría a obtener eso?",
        "¿Está seguro de que necesita eso?"]],

    [r'por que no puedes ([^\?]*)\??' or r'por qué no puedes ([^\?]*)\??',
        ["¿De verdad crees que no lo hago?",
        "Tal vez eventualmente lo haré..",
        "¿De verdad quieres que yo haga eso?"]],

    [r'¿Por que no puedo ([^\?]*)\??' or r'por que no puedo ([^\?]*)\??' or r'¿Por qué no puedo ([^\?]*)\??' or r'Por qué no puedo ([^\?]*)\??',
        ["¿Crees que deberías ser capaz de hacer eso?",
        "Si pudieras hacerlo, ¿qué harías?",
        "No sé - ¿por qué no puedes hacerlo?",
        "¿Lo has intentado realmente?",
        "Si no eres capaz dehacerlo entonces eso te define cómo un autentico marica!"]],

    [r'no puedo(.*)',
        ["¿Cómo sabes que no puedes hacerlo?",
        "Tal vez podría hacerlo si lo intentó.",
        "¿Qué se necesita para que usted haga eso?"]],

    [r'yo soy (.*)',
        ["¿Has venido a mí porque eres  así?",
        "¿Cuánto tiempo has estado así?",
        "¿Cómo te sientes acerca de ser así?"]],

    [r'estoy (.*)',
        ["¿Cómo te hace sentir estar de esa manera?",
        "¿Te gusta ser estar de esa forma?",
        "¿Por qué me dices que eres así",
        "¿Por qué crees que eres  como dices?"]],

    [r'¿ ([^\?]*)\??',
        ["¿Por qué importa si soy de esa manera?",
        "¿Lo preferirías si no fuera eso?",
        "Tal vez usted piensa que soy.",
        "Puedo ser eso - ¿qué piensas?"]],

    [r'¿qué (.*)' or r'qué (.*)' or r'que (.*)',
        ["¿Por qué preguntas?",
        "¿Cómo le ayudaría una respuesta a eso?",
        "¿Qué piensas?"]],

    [r'¿cómo (.*)' or r'cómo (.*)' or r'como (.*)',
        ["¿Cómo se supone?",
        "Tal vez puedas responder a tu propia pregunta.",
        "¿Qué estás realmente pidiendo?"]],

    [r'porque (.*)',
        ["¿Es esa la verdadera razón?",
        "¿Qué otras razones vienen a la mente?",
        "¿Esa razón se aplica a cualquier otra cosa?",
        "Si eso es así, ¿qué otra cosa debe ser verdadera?"]],

    [r'(.*) lo siento (.*)',
        ["Hay muchas veces cuando no se necesita disculpa.",
        "¿Qué sentimientos tiene cuando se disculpa?"]],

    [r'hola(.*)',
        ["Hola ... me alegro de que puedas pasar por hoy.",
        "¿Hola, cómo estas hoy?",
        "Hola, ¿cómo te sientes hoy?"]],

    [r'pienso (.*)',
        ["¿Dudas sobre eso?",
        "¿De verdad piensas eso?",
        "Pero no estás seguro de loque dices?"]],

    [r'(.*) amigo (.*)',
        ["Cuéntame más sobre tus amigos.",
        "Cuando piensas en un amigo, ¿qué te viene a la mente?",
        "¿Por qué no me hablas de un amigo desde la infancia?"]],

    [r'si',
        ["Pareces muy seguro.",
        "Está bien, pero ¿puedes hacer algo?"]],

    [r'(.*) ordenador(.*)',
        ["¿De verdad estás hablando de mí?",
        "¿Parece extraño hablar con una computadora?",
        "¿Cómo te hacen sentir las computadoras?",
        "¿Se siente amenazado por las computadoras?"]],

    [r'eso es (.*)',
        ["¿Crees que es asi realmente?",
        "Tal vez sea de esa manera - ¿qué piensas?",
        "Si fuera como dices, ¿qué harías?",
        "Podría ser que fuera de esa manera."]],

    [r'es eso (.*)',
        ["Pareces muy seguro.",
        "Si te dijera que probablemente no es lo que me dices, ¿qué sentirías?"]],

    [r'¿puedes ([^\?]*)\??',
        ["¿Qué te hace pensar que no puedo hacer eso?",
        "Si pudiera hacer eso, ¿entonces qué?",
        "¿Por qué me preguntas si puedo hacer eso?"]],

    [r'puedo ([^\?]*)\??',
        ["No puedes querer eso!.",
        "¿Quieres ser capaz de hacer eso",
        "Si puedes hacer eso, ¿cierto?"]],

    [r'tu eres (.*)' or r'¿tu eres (.*)',
        ["¿Por qué crees que soy de esa manera?",
        "¿Te gusta pensar que soy así?",
        "Tal vez usted quiere que sea.",
        "¿Tal vez estás hablando de ti?"]],

    [r'¿eres ture (.*)',
        ["¿Por qué dices que soy asi?",
        "¿Por qué crees que soy asi?",
        "¿Estamos hablando de ti o de mí?"]],

    [r'¿no lo hago (.*)',
        ["¿Realmente no=",
        "¿Por qué no?",
        "¿Quieres hacerlo?"]],

    [r'me siento (.*)',
        ["Bueno, cuéntame más sobre estos sentimientos.",
        "¿Sientes a menudo eso?",
        "¿Cuándo sientes normalmente así?",
        "Cuando sientes eso, ¿qué haces?"]],

    [r'yo tengo (.*)',
        ["¿Por qué me dices que tienes eso?",
        "¿Realmente tienes eso?",
        "Ahora que tienes eso, ¿qué harás después?"]],

    [r'yo debo (.*)',
        ["¿Podría explicar por qué lo haría?",
        "¿Por que lo harias?",
        "¿Quién más sabe que lo harías?"]],

    [r'esta ahí (.*)',
        ["¿Crees que hay algo?",
        "Es probable que haya algo así.",
        "¿Te gustaría tener algo así?"]],

    [r'mi (.*)',
        ["Ya veo.",
        "¿Por qué lo dices?",
        "Entonces, ¿cómo te sientes?"]],

    [r'tu (.*)',
        ["debemos estar discutiendo contigo, no conmigo.",
        "¿Por qué dices eso de mí?",
        "¿Por qué te importa?"]],

    [r'por qué (.*)',
        ["¿Por qué no me dices la razón por la cual piensas eso?",
        "¿Por qué crees que eso es asi?"]],

    [r'quiero que (.*)',
        ["¿Qué significaría para ti si tienes algo así?",
        "¿Por qué quieres eso?",
        "¿Qué harías si lo tuvieras?",
        "Si lo tienes, entonces ¿qué harías?"]],

    [r'(.*) madre(.*)',
        ["Cuéntame más sobre tu madre.",
        "¿Cómo era tu relación con tu madre?",
        "¿Cómo te sientes con tu madre?",
        "¿Cómo se relaciona esto con tus sentimientos hoy?",
        "Las buenas relaciones familiares son importantes."]],

    [r'(.*) padre(.*)',
        ["Cuéntame más sobre tu padre.",
        "¿Cómo te hizo sentir tu padre?",
        "¿Cómo te sientes con tu padre?",
        "¿Su relación con su padre se relaciona con sus sentimientos hoy?",
        "¿Tiene problemas para mostrar afecto con su familia?"]],

    [r'(.*) niño(.*)',
        ["¿Tenías amigos íntimos cuando era niño?",
        "¿Cuál es tu recuerdo favorito de la niñez?",
        "¿Recuerdas algún sueño o pesadilla desde la infancia?",
        "¿Alguna vez te han molestado los otros niños?",
        "¿Cómo crees que tus experiencias infantiles se relacionan con tus sentimientos hoy?"]],

    [r'(.*)\?',
        ["¿Porque preguntas eso?",
        "Por favor, considere si puede responder a su propia pregunta.",
        "¿Quizás la respuesta está dentro de ti?",
        "¿Por qué no me lo dices?"]],

    [r'adios',
        ["Gracias por hablar conmigo.",
        "Adiós.",
        "Gracias, eso será 60 €. ¡Que tengas un buen día!"]],

    [r'(.*)',
        ["Por favor, cuéntame más.",
        "Vamos a cambiar de enfoque un poco ... Háblame de tu familia.",
        "¿Puedes profundizar sobre eso?",
        "¿Por qué dices eso?",
        "Ya veo.",
        "Muy interesante.",
        "Ya veo, ¿y qué te dice eso?",
        "¿Cómo te hace sentir eso?",
        "¿Cómo te sientes cuando dices eso?"]]
]




#Funcion principal
def text_to_speech(texto):
    hay_web = pingOk("google.es")
    
    #para pruebas con pyttsx
    #hay_web = pingOk("no_hay_web.es")
    
    if (hay_web):
        speech_google(texto)
    else:
        speech_pyttsx(texto)

#Funcion para comprobar si hay conexión
def pingOk(sHost):
    try:
        output = subprocess.check_output("ping -{} 1 {}".format('n' if platform.system().lower()=="windows" else 'c', sHost), shell=True)

    except Exception:
        #print("No hay conexión.")
        return False

    #print("Hay conexión.")
    return True


#Funcion para convertir texto a voz con libreria Gtts de Google
def speech_google(texto):
    
    tts = gTTS(texto, lang = 'es', tld= 'es')
    tts.save("speaked.mp3")
    file = "speaked.mp3"
    os.system("mpg123 " + file + " >/dev/null 2>&1")
    #Para borrar el archivo que ha creado Gtts
    os.remove("speaked.mp3")
    

#Funcion para convertir texto a voz con libreria pyttsx
def speech_pyttsx(texto):
    
    engine = pyttsx3.init()
    engine.setProperty('voice', "spanish")
    engine.say(texto)
    engine.runAndWait();
    


# ----------------------------------------------------------------------
#  command_interface
# ----------------------------------------------------------------------
def command_interface():

    print('Psicólogo\n---------')
    print('Habla con el programa-')        
    print('escribe "quit" para salir')
    print('='*72)
    print('Hola, ¿Cómo te sientes hoy?')
    text_to_speech('Hola, ¿Cómo te sientes hoy?')

    s = ''
    therapist = Eliza()
    while s != 'quit':
        try:
            s = input('> ')
        except EOFError:
            s = 'quit'
        while s[-1] in '!.':
            s = s[:-1]
        contestacion = therapist.respond(s)
        print(contestacion)
        text_to_speech(contestacion)

if __name__ == "__main__":
    command_interface()
