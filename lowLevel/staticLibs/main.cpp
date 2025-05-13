#include <iostream>
#include "add.h"
#include "multiply.h"
// basics of building a static library out of cpp sources
// build a math library out of files

// static library is collection of .o or obkect files

// ar -crs makes a new archive/lib
// .a extension for static libs
// g++ -c multiply.cpp
//ar -crs libtest.a multiply.o add.o

// must tell linker where library exists
// g++ main.cpp -o main -ltest -L./ --> creates executable

// what was done: have source files compile into object code, combined into archive for a static librayr, linked together with main
int main(){

    auto sum = add(5,10);
    std::cout<<"Sum = "<<sum<<'\n';

    auto product = multiply(5,10);
    std::cout<<"Product = "<<product<<"\n";

}