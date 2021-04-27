#!/bin/bash
#Script creado por sg1o, UzuRodri95 y Dimitar
#Fuente: https://github.com/UzuRodri95/voiceProject
#Asignatura: SMII
#Dependencias a instalar:
# PIP3, PortAudio2, Vosk, SoundDevice, TQDM, gTTS, pyTTS, libspeak1, playsound and GTS
#Creado para UBUNTU 20.04
#Prerequisitos: tener el sistema al dia --> sudo apt-get update && sudo apt-get upgrade
#Ejecutar el script con sudo para permitir las instalaciones sin errores

#ESTE SCRIPT INCLUYE UNA INSTALACION Y CAMBIOS DE PERMISOS
#ESTE SCRIPT INCLUYE UNA INSTALACION Y CAMBIOS DE PERMISOS
#ESTE SCRIPT INCLUYE UNA INSTALACION Y CAMBIOS DE PERMISOS

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
printf '==============     Instalacion de Super Mario Voice      ===============\n'
printf '==============Comprobacion e instalacion de dependencias================\n'
printf "========================================================================\n"

######################################################################################

sleep 0.2s

essential='build-essential'

dpkg -s $essential &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]build-essential no satisfecho, se va a instalar"
        carga &
        sudo apt-get install $essential -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $essential &> /dev/null && echo "[*]build-essential instalado exitosamente"
        
    else 
        echo "[!]build-essential satisfecho" 
    
fi

######################################################################################

sleep 0.2s

git='git'

dpkg -s $git &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]git no satisfecho, se va a instalar"
        carga & 
        sudo apt-get install $git -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $git &> /dev/null && echo "[*]git instalado exitosamente"
        
    else 
        echo "[!]git satisfecho" 
    
fi

######################################################################################

sleep 0.2s

make='make'

dpkg -s $make &> /dev/null

if [ $? -ne 0 ]
    then
        echo "[!]make no satisfecho, se va a instalar"
        carga &
        sudo apt-get install $make -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $make &> /dev/null && echo "[*]make instalado exitosamente"

    else
        echo "[!]make satisfecho"

fi

######################################################################################

sleep 0.2s

gcc='gcc'

dpkg -s $gcc &> /dev/null

if [ $? -ne 0 ]
    then
        echo "[!]gcc no satisfecho, se va a instalar"
        carga &
        sudo apt-get install $gcc -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $gcc &> /dev/null && echo "[*]gcc instalado exitosamente"

    else
        echo "[!]gcc satisfecho"

fi

sleep 0.2s

pip='python3-pip'

dpkg -s $pip &> /dev/null

if [ $? -ne 0 ]
    then
        echo "[!]pip no satisfecho, se va a instalar"
        carga &
        sudo apt-get install $pip -y &> /dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $pip &> /dev/null && echo "[*]pip instalado exitosamente"

    else
        echo "[!]pip satisfecho"

fi

######################################################################################

sleep 0.2s

git clone https://github.com/snes9xgit/snes9x.git

sleep 0.2s

######################################################################################

zlib1g='zlib1g-dev'
libpng='libpng-dev'
xorg='xorg-dev'
pulseaudio='pulseaudio'
libasound='libportaudio2'

dpkg -s $libasound &> /dev/null

if [ $? -ne 0 ]
    then
        echo "[!]libasound no satisfecho, se va a instalar"
        carga &
        sudo apt-get install $libasound -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $libasound &> /dev/null && echo "[*]libasound instalado exitosamente"

    else
        echo "[!]libasound satisfecho"

fi

sleep 0.2s

dpkg -s $zlib1g &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]zlib1g no satisfecho, se va a instalar"
        carga &
        sudo apt-get install $zlib1g -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $zlib1g &> /dev/null && echo "[*]zlib1g instalado exitosamente"
        
    else 
        echo "[!]zlib1g satisfecho" 
    
fi

sleep 0.2s

dpkg -s $libpng &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]libpng no satisfecho, se va a instalar" 
        carga &
        sudo apt-get install $libpng -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $libpng &> /dev/null && echo "[*]libpng instalado exitosamente"
        
    else 
        echo "[!]libpng satisfecho" 
    
fi

sleep 0.2s

dpkg -s $xorg &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]xorg no satisfecho, se va a instalar"
        carga &
        sudo apt-get install $xorg -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $xorg &> /dev/null && echo "[*]xorg instalado exitosamente"
        
    else 
        echo "[!]xorg satisfecho" 
    
fi

sleep 0.2s

dpkg -s $pulseaudio &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]pulseaudio no satisfecho, se va a instalar"
        carga &
        sudo apt-get install $pulseaudio -y &> /dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $pulseaudio &> /dev/null && echo "[*]pulseaudio instalado exitosamente"
        
    else 
        echo "[!]pulseaudio satisfecho" 
    
fi

sleep 0.2s

x11='libx11-dev'

dpkg -s $x11 &> /dev/null

if [ $? -ne 0 ]
    then
        echo "[!]libx11-dev no satisfecho, se va a instalar"
        carga &
        sudo apt-get install $x11 -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $x11 &> /dev/null && echo "[*]make instalado exitosamente"

    else
        echo "[!]x11 satisfecho"

fi

sleep 0.2s

autoconf='autoconf'

dpkg -s $autoconf &> /dev/null

if [ $? -ne 0 ]
    then
        echo "[!]Autoconf no satisfecho, se va a instalar"
        carga &
        sudo apt-get install $autoconf -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $autoconf &> /dev/null && echo "[*]Autoconf instalado exitosamente"

    else
        echo "[!]Autoconf satisfecho"

fi

sleep 0.2s

glu='libglu1-mesa-dev'

dpkg -s $glu &> /dev/null

if [ $? -ne 0 ]
    then
        echo "[!]Glu1 no satisfecho, se va a instalar"
        carga &
        sudo apt-get install $glu -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $glu &> /dev/null && echo "[*]Glu1 instalado exitosamente"

    else
        echo "[!]Glu1 satisfecho"

fi

sleep 0.2s

lib='libxcomposite-dev libxdamage-dev libxrender-dev libxv-dev'

dpkg -s $lib &> /dev/null

if [ $? -ne 0 ]
    then
        echo "[!]Varias librerias no satisfechas, se van a instalar"
        carga &
        sudo apt-get install $lib -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $lib &> /dev/null && echo "[*]Las librerias se han instalado exitosamente"

    else
        echo "[!]Varias librerias satisfechas"

fi

sleep 0.2s

libc='libc6-dev'

dpkg -s $libc &> /dev/null

if [ $? -ne 0 ]
    then
        echo "[!]Libc no satisfecha, se va a instalar"
        carga &
        sudo apt-get install $libc -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $libc &> /dev/null && echo "[*]Se ha instalado exitosamente"

    else
        echo "[!]Libc satisfecha"

fi

sleep 0.2s

gpp='gpp'

dpkg -s $gpp &> /dev/null

if [ $? -ne 0 ]
    then
        echo "[!]GPP no satisfecho, se va a instalar"
        carga &
        sudo apt-get install $gpp -y &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
        dpkg -s $gpp &> /dev/null && echo "[*]GPP instalado exitosamente"

    else
        echo "[!]GPP satisfecho"

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

keyboard=$(pip3 list | grep keyboard)

if [ "$keyboard" ]
    then
        echo "[!] Keyboard satisfecho"
    else
        echo "[!]Keyboard no satisfecho, se va a instalar"
        carga &
        sudo pip3 install keyboard &>/dev/null
        kill "$!"
        echo -n "> 100%"
        printf "\n"
fi

echo "[*]Se va a configurar snes"

cd snes9x/unix;sudo autoconf;sudo ./configure --enable-netplay;sudo make

sleep 0.2s
ls
sudo cp snes9x /usr/bin/
sleep 0.2s
sudo chown root:root /usr/bin/snes9x
sleep 0.5s

printf "========================================================================\n"
printf '=====================Dependencias instaladas============================\n'
printf '===============si hubieron errores volver a ejecutar====================\n'
printf "========================================================================\n"