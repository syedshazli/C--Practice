#include <iostream>

#ifdef myFlag
int num = 45;
#else
int num = 30;
#endif

// IFDEF is NOT a compiler flag, as in it is not set by a command line argument
int main(){

    std::cout<<"Hey, the value of num is "<<num<<'\n';

}