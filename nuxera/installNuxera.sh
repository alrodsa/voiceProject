#!/bin/bash
#Script creado por sg1o, UzuRodri95 y Dimitar
#Fuente: https://github.com/UzuRodri95/voiceProject
#Asignatura: SMII
#Dependencias a instalar:
# PIP3, PortAudio2, Vosk, SoundDevice, TQDM
#Creado para UBUNTU 20.04
#Prerequisitos: tener el sistema al dia --> sudo apt-get update && sudo apt-get upgrade
#Ejecutar el script con sudo para permitir las instalaciones sin errores

printf "========================================================================\n"
printf '================Bienvenido a la instalacion de NUXERA:==================\n'
printf '==============Comprobacion e instalacion de dependencias================\n'
printf "========================================================================\n"
sleep 0.2s

echo "[*]Comprobando dependencias APT"

pip='python3-pip'



dpkg -s $pip &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]Pip3 no satisfecho, se va a instalar" 
        sudo apt-get install $pip
        dpkg -s $pip &> /dev/null && echo "[*]Pip3 instalado exitosamente"
        
    else 
        echo "[!]Pip3 satisfecho" 
    
fi

sleep 0.2s

audio='libportaudio2'

dpkg -s $audio &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]PortAudio2 no satisfecho, se va a instalar" 
        sudo apt-get install $audio
        dpkg -s $pip &> /dev/null && echo "[*]PortAudio2 instalado exitosamente"
        
    else 
        echo "[!]PortAudio2 satisfecho" 
    
fi

sleep 0.2s

echo "[*]Comprobando dependencias PIP3"

sleep 0.2s

sound=$(pip3 list | grep sounddevice)

if [ "$sound" ]
    then
        echo "[!] SoundDevice satisfecho"
    else
        echo "[!]SoundDevie no satisfecho, se va a instalar"
        pip3 install sounddevice
fi


sleep 0.2s

voz=$(pip3 list | grep vosk)

if [ "$voz" ]
    then
        echo "[!] Vosk satisfecho"
    else
        echo "[!]Vosk no satisfecho, se va a instalar"
        pip3 install vosk
fi

sleep 0.2s

cargas=$(pip3 list | grep tqdm)

if [ "$cargas" ]
    then
        echo "[!] TQDM satisfecho"
    else
        echo "[!]TQDM no satisfecho, se va a instalar"
        pip3 install tqdm
fi


sleep 0.5s

printf "========================================================================\n"
printf '=====================Dependencias instaladas============================\n'
printf '===============si hubieron errores volver a ejecutar====================\n'
printf "========================================================================\n"