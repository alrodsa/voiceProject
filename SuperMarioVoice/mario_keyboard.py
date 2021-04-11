import retro
import keyboard
import time
from os import system
import argparse
import os
import queue
import sounddevice as sd
import vosk
import sys
from time import sleep
from subprocess import call
from tqdm import tqdm

def main():
    env = retro.make(game='SuperMarioWorld-Snes')
    action = []
    obs = env.reset()
    reward = 0
    while True:
        '''
            env.step() es el siguiente paso que va a hacer el agente en el entorno lo que hay que hacer aqui es poner la decision
                       que tomara nuestro agente tras entrenar el modelo y se este ejecutando. Se le pasa un array de longitud 12
                       donde vienen repesentado cada uno de los botones del mando de la SNES, en función de los que estén activos,
                       se hace una accion.
                       action_space es el vector binario con los 12 botones:
                                    [    0    ,    0    ,    0    ,    0    ,    0    ,    0    ,    0    ,    0    ,    0    ,    0    ,    0    ,    0    ]
                                         0         1         2         3         4         5         6         7         8         9        10        11
                                    [   "B",      "Y",    "SELECT", "START",    "UP",    "DOWN",  "LEFT",   "RIGHT",    "A",      "X",      "L",      "R"   ]
                       
            rew -> reward (float), cantidad de reward acumulado, se representa como un par state-action
            done -> (boolean), si hemos llegado al ultimo estado posible
            info -> informacion adicional sobre el entorno del estado actual
            env.action_space.sample() -> lo que hace es de forma aleatoria ir pulsando botones del mando de la SNES
        '''

        if keyboard.is_pressed('a'):
                action = [1,0,0,0,0,0,0,0,0,0,0,0]
                obs, rew, done, info = env.step(action)
                reward += rew
        elif keyboard.is_pressed('right arrow'):
            action = [0,0,0,0,0,0,0,1,0,0,0,0]
            obs, rew, done, info = env.step(action)
            reward += rew
        elif keyboard.is_pressed('left arrow'):
            action = [0,0,0,0,0,0,1,0,0,0,0,0]
            obs, rew, done, info = env.step(action)
            reward += rew
        elif keyboard.is_pressed('s'):
            action = [0,1,0,0,0,0,0,0,0,0,0,0]
            obs, rew, done, info = env.step(action)
            reward += rew
        else:
            action = [0,0,0,0,0,0,0,0,0,0,0,0]
            obs, rew, done, info = env.step(action)
            reward += rew

        print("Reward: ", reward)
        
        system('clear')

        if done:
            break

        env.render()
        
    env.close()


if __name__ == "__main__":
    main()