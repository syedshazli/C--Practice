root@Syed:/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/ldLibPath# gcc main.c -o exe -I"/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/ldLibPath/mathLibs" -L"/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/ldLibPath/mathLibs"
 -lmathlib
root@Syed:/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/ldLibPath# ./exe
./exe: error while loading shared libraries: libmathlib.so: cannot open shared object file: No such file or directory      
root@Syed:/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/ldLibPath# ldd
ldd: missing file arguments
Try `ldd --help' for more information.
root@Syed:/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/ldLibPath# lld
Command 'lld' not found, but can be installed with:
apt install lld
root@Syed:/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/ldLibPath# ldd
ldd: missing file arguments
Try `ldd --help' for more information.
root@Syed:/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/ldLibPath# ldd --help
Usage: ldd [OPTION]... FILE...
      --help              print this help and exit
      --version           print version information and exit
  -d, --data-relocs       process data relocations
  -r, --function-relocs   process data and function relocations
  -u, --unused            print unused direct dependencies
  -v, --verbose           print all information

For bug reporting instructions, please see:
<https://bugs.launchpad.net/ubuntu/+source/glibc/+bugs>.
root@Syed:/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/ldLibPath# ldd exe
        linux-vdso.so.1 (0x00007ffda6bee000)
        libmathlib.so => not found
        libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f08132a1000)
        /lib64/ld-linux-x86-64.so.2 (0x00007f08134da000)
root@Syed:/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/ldLibPath# export LD_LIBRARY_PATH="/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/ldLibPath/mathLibs":$LD_LIBRARY_PATH
root@Syed:/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/ldLibPath# ./exe
Result of add is 11
Result of subtract is -2