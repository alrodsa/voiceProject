#!/bin/bash
#Script creado por sg1o, UzuRodri95 y Dimitar
#Fuente: https://github.com/UzuRodri95/voiceProject
#Asignatura: SMII
#Dependencias a instalar:
# PIP3, PortAudio2, Vosk, SoundDevice, TQDM, gTTS, pyTTS, libspeak1, playsound and GTS
#Creado para UBUNTU 20.04
#Prerequisitos: tener el sistema al dia --> sudo apt-get update && sudo apt-get upgrade
#Ejecutar el script con sudo para permitir las instalaciones sin errores

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
        sudo apt-get install $essential
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
        sudo apt-get install $git
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
        sudo apt-get install $make
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
        sudo apt-get install $gcc
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
        sudo apt-get install $pip
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
        sudo apt-get install $libasound
        dpkg -s $libasound &> /dev/null && echo "[*]libasound instalado exitosamente"

    else
        echo "[!]libasound satisfecho"

fi

sleep 0.2s

dpkg -s $zlib1g &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]zlib1g no satisfecho, se va a instalar" 
        sudo apt-get install $zlib1g
        dpkg -s $zlib1g &> /dev/null && echo "[*]zlib1g instalado exitosamente"
        
    else 
        echo "[!]zlib1g satisfecho" 
    
fi

sleep 0.2s

dpkg -s $libpng &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]libpng no satisfecho, se va a instalar" 
        sudo apt-get install $libpng
        dpkg -s $libpng &> /dev/null && echo "[*]libpng instalado exitosamente"
        
    else 
        echo "[!]libpng satisfecho" 
    
fi

sleep 0.2s

dpkg -s $xorg &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]xorg no satisfecho, se va a instalar" 
        sudo apt-get install $xorg
        dpkg -s $xorg &> /dev/null && echo "[*]xorg instalado exitosamente"
        
    else 
        echo "[!]xorg satisfecho" 
    
fi

sleep 0.2s

dpkg -s $pulseaudio &> /dev/null

if [ $? -ne 0 ] 
    then 
        echo "[!]pulseaudio no satisfecho, se va a instalar" 
        sudo apt-get install $pulseaudio
        dpkg -s $pulseaudio &> /dev/null && echo "[*]pulseaudio instalado exitosamente"
        
    else 
        echo "[!]pulseaudio satisfecho" 
    
fi

######################################################################################
sudo apt-get upgrade
sudo apt install autoconf

sudo apt-get upgrade
sudo apt install libx11-dev
sudo apt install libglu1-mesa-dev
sudo apt-get install libxcomposite-dev libxdamage-dev libxrender-dev libxv-dev
sudo apt-get install libportaudio2
sudo apt install libc6-dev
sudo apt-get install gcc gpp
sudo apt-get install python3-pip
sudo apt-get upgrade

sudo pip3 install tqdm sounddevice keyboard vosk
sleep 0.2s

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
