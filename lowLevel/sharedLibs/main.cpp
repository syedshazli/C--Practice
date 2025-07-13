// shared libraries is done w dynamic linking
// code in library isnt built into final executable
// needs to be loaded into memory at runtime


// g++ -c add.cpp multiply.cpp -fpic
// load lib at runtime, we dont know at compile team where in mem it'll be
// can't rely on fixed address, code should run no matter position
// hence fpic flag

// generate a shared library out of obj code
// g++ -shared add.o multiply.o -o libtest.so
// g++ main.cpp -o main -ltest -L./

/**
 * helps us find directory of library 
 *export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/lowlevel/sharedLibs/mnt/c/Users/syeda/Downloads/C++ Practice/C--Practice/lowlevel/sharedLibs 
 */

#include <iostream>
#include "add.h"
#include "multiply.h"

int main(){

    auto sum = add(5,10);
    std::cout<<"Sum = "<<sum<<'\n';

    auto product = multiply(5,10);
    std::cout<<"Product = "<<product<<"\n";

}