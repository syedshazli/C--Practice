#include <stdio.h>
#include "myMath.h"
// #include "moreMath.h"
/**
 * first compile: $ gcc main.c -o myapp -L. -lmathlib
 * -L. tells compiler to only look in current directory for any libraries
 * $ ./myapp: error while loading shared libraries: libmathlib.so: cannot open shared object file: No such file or directory
 * 
 * This happens because linker looks for the shared library in standard locations. Won't find our custom shared lib under these specified locations like /usr/lib
 * 
 * The library is in the current directory, so not searched by default
 * 
 * $ldd myapp shows libmath.so not found
 * 
 * now, use LD_LIB PATH: export LD_LIBRARY_PATH="/mnt/c/Users/sy
eda/Downloads/C++ Practice/C--Practice/ldLibPath/mathLibs":$LD_LIBRARY_PATH

 *  Or, can use export LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH
 
 */ 

int main()
{
    int a = 6;
    int b = 5;
    int resultofAdd = add(a,b);

    // int c,d = 7;
    // int resultofSubtract = subtract(a,b);
    printf("Result of add is %d", resultofAdd);
    // printf("Result of subtract is %d", resultofSubtract);
}