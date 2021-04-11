import os

def cabecera():
    print("#"*50)
    print("#"*10, "Welcome to Super Mario Voice", "#"*10)
    print("#"*50)

def main():
    
    os.system('sudo apt-get install git build-essential')
    os.system('clear')
    cabecera()

    os.system('git clone https://github.com/snes9xgit/snes9x.git')
    os.system('clear')
    cabecera()

    os.system('cd snes9x')
    os.system('clear')
    cabecera()

    os.system('sudo apt-get install zlib1g-dev libpng-dev xorg-dev')
    os.system('clear')
    cabecera()

    os.system('cd snes9x/unix;sudo autoconf;ls -l')
    os.system('clear')
    cabecera()

    os.system('sudo ./snes9x/unix/configure --enable-netplay')
    os.system('clear')
    cabecera()
    
    os.system('cd snes9x/unix/; make')
    os.system('clear')
    cabecera()

    os.system('cd snes9x/unix/; sudo cp snes9x /usr/bin/')
    os.system('clear')
    cabecera()

    os.system('cd snes9x/unix/; sudo chown root:root /usr/bin/snes9x')
    os.system('clear')

    print("\n\t\t", "-"*8, "INSTALLATION FINISHED", "-"*8)
    

if __name__ == "__main__":
    main()
