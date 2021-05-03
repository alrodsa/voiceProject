#!/bin/sh

if [[ $EUID -ne 0 ]]; then
    echo "El script se tiene que ejecutar como sudo" 
    exit 1
fi

printf "========================================================================\n"
printf '==============      Ejecución de Super Mario Voice       ===============\n'
printf "========================================================================\n"

SCRIPT=$(readlink -f $0);
dir_base=`dirname $SCRIPT`;

if [ "$#" -eq 0 ];then
    sudo -u $USER padsp snes9x $dir_base/rom/rom.sfc &>/dev/null
    sudo python3 asistenteSMV.py
    else
        sudo -u $USER padsp snes9x $dir_base/rom/rom.sfc &>/dev/null
        sudo python3 asistenteSMV.py -fe
fi;