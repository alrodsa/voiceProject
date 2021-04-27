#!/bin/bash
#instalacion de depndencias para la lectura de arhcivos

carga() {
    sleep 0.1
    echo -n '0%  <'
    while sleep 0.1; do
        printf '='
    done
}

if [[ $EUID -ne 0 ]]; then
    echo "El script se tiene que ejecutar como sudo" 
    exit 1
fi

printf "========================================================================\n"
printf '==========Bienvenido a la instalacion de Lectura de Archivos:===========\n'
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
        sudo apt-get install $pip -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $pip &> /dev/null && echo "[*] Pip3 instalado exitosamente"
        
    else 
        echo "[!]Pip3 satisfecho" 
    
fi

sleep 0.2s

pdf='poppler-utils'

dpkg -s $pdf &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!] Poppler-utils no satisfecho, se va a instalar" 
        carga &
        sudo apt-get install $pip -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $pip &> /dev/null && echo "[*] Popper-utils instalado exitosamente"
        
    else 
        echo "[!]Popper-utils satisfecho" 
    
fi

sleep 0.2s

gst='python3-gst-1.0'

dpkg -s $gst &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]GST no satisfecho, se va a instalar" 
        carga &
        sudo apt-get install $gst -y &>/dev/null
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
        sudo apt-get install $speak -y &>/dev/null
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
        sudo apt-get install $mpg -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $mpg &> /dev/null && echo "[*]MPG123 instalado exitosamente"
        
    else 
        echo "[!]MPG123 satisfecho" 
    
fi

echo "[*]Comprobando dependencias PIP3"


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

