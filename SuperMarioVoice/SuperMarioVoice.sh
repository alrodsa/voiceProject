printf "========================================================================\n"
printf '==============      Ejecución de Super Mario Voice       ===============\n'
printf "========================================================================\n"

padsp snes9x  ~/rom.zip &
sleep 5s
sudo python3 asistenteSMV.py

