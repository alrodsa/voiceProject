printf "========================================================================\n"
printf '==============      Ejecución de Super Mario Voice       ===============\n'
printf "========================================================================\n"

SCRIPT=$(readlink -f $0);
dir_base=`dirname $SCRIPT`;

padsp snes9x $dir_base/rom/SuperMario.sfc &>/dev/null
sudo python3 asistenteSMV.py