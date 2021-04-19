#!/bin/bash
#Script creado por sg1o, UzuRodri95 y enmitko1
#Fuente: https://github.com/UzuRodri95/voiceProject
#Asignatura: SMII
#Dependencias a instalar:
# PIP3, PortAudio2, Vosk, SoundDevice, TQDM, gTTS, pyTTS, libspeak1, mpg123 and GTS
#Creado para UBUNTU 20.04
#Prerequisitos: tener el sistema al dia --> sudo apt-get update && sudo apt-get upgrade
#Ejecutar el script con sudo para permitir las instalaciones sin errores

carga() {
    sleep 0.1
    echo -n '0%  <'
    while sleep 0.1; do
        printf '='
    done
}


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
        echo "[!] Pip3 no satisfecho, se va a instalar" 
        carga &
        sudo apt-get install $pip &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $pip &> /dev/null && echo "[*] Pip3 instalado exitosamente"
        
    else 
        echo "[!]Pip3 satisfecho" 
    
fi

sleep 0.2s

audio='libportaudio2'

dpkg -s $audio &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]PortAudio2 no satisfecho, se va a instalar" 
        carga &
        sudo apt-get install $audio &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $audio &> /dev/null && echo "[*]PortAudio2 instalado exitosamente"
        
    else 
        echo "[!]PortAudio2 satisfecho" 
    
fi

sleep 0.2s

gst='python3-gst-1.0'

dpkg -s $gst &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]GST no satisfecho, se va a instalar" 
        carga &
        sudo apt-get install $gst &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $gst &> /dev/null && echo "[*]GST instalado exitosamente"
        
    else 
        echo "[!]GST satisfecho" 
    
fi

sleep 0.2s

speak='libespeak1'

dpkg -s $speak &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]SPEAK1 no satisfecho, se va a instalar" 
        carga &
        sudo apt-get install $speak &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $speak &> /dev/null && echo "[*]SPEAK1 instalado exitosamente"
        
    else 
        echo "[!]SPEAK1 satisfecho" 
    
fi

sleep 0.2s

mpg='mpg123'

dpkg -s $mpg &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]MPG123 no satisfecho, se va a instalar" 
        carga &
        sudo apt-get install $mpg &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $mpg &> /dev/null && echo "[*]MPG123 instalado exitosamente"
        
    else 
        echo "[!]MPG123 satisfecho" 
    
fi

echo "[*]Comprobando dependencias PIP3"

sleep 0.2s

sound=$(pip3 list | grep sounddevice)

if [ "$sound" ]
    then
        echo "[!] SoundDevice satisfecho"
    else
        echo "[!]SoundDevie no satisfecho, se va a instalar"
        carga &
        sudo pip3 install sounddevice &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
fi


sleep 0.2s

voz=$(pip3 list | grep vosk)

if [ "$voz" ]
    then
        echo "[!] Vosk satisfecho"
    else
        echo "[!]Vosk no satisfecho, se va a instalar"
        carga &
        sudo pip3 install vosk &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
fi

sleep 0.2s

cargas=$(pip3 list | grep tqdm)

if [ "$cargas" ]
    then
        echo "[!] TQDM satisfecho"
    else
        echo "[!]TQDM no satisfecho, se va a instalar"
        carga &
        sudo pip3 install tqdm &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
fi

sleep 0.2s

gtts=$(pip3 list | grep gTTS)

if [ "$gtts" ]
    then
        echo "[!] GTTS satisfecho"
    else
        echo "[!]GTTS no satisfecho, se va a instalar"
        carga &
        sudo pip3 install gtts &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
fi

sleep 0.2s

pytts=$(pip3 list | grep pyttsx3)

if [ "$pytts" ]
    then
        echo "[!] PYTTS satisfecho"
    else
        echo "[!] PYTTS no satisfecho, se va a instalar"
        carga &
        sudo pip3 install pyttsx3 &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
fi

sleep 0.5s


printf "========================================================================\n"
printf '=====================Dependencias instaladas============================\n'
printf '===============si hubieron errores volver a ejecutar====================\n'
printf "========================================================================\n"