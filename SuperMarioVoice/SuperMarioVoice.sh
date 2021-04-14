printf "========================================================================\n"
printf '==============      Ejecución de Super Mario Voice       ===============\n'
printf "========================================================================\n"

padsp snes9x  ~/rom.zip &> /dev/null
sudo python3 asistenteSMV.py 


