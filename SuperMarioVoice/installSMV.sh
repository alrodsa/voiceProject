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
        sudo apt-get install $pip
        dpkg -s $pip &> /dev/null && echo "[*]git instalado exitosamente"
        
    else 
        echo "[!]git satisfecho" 
    
fi

######################################################################################

sleep 0.2s

cp rom/rom.zip ~
git clone https://github.com/snes9xgit/snes9x.git

sleep 0.2s

######################################################################################

zlib1g='zlib1g-dev'
libpng='libpng-dev'
xorg='xorg-dev'

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

######################################################################################

sleep 0.2s
cd snes9x/unix;sudo autoconf;ls -l
sleep 0.2s
sudo ./configure --enable-netplay
sleep 0.2s
sudo make
sleep 0.2s
sudo cp snes9x /usr/bin/
sleep 0.2s
sudo chown root:root /usr/bin/snes9x
sleep 0.5s

printf "========================================================================\n"
printf '=====================Dependencias instaladas============================\n'
printf '===============si hubieron errores volver a ejecutar====================\n'
printf "========================================================================\n"