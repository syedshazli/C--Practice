// to generate .ll file (LLVM Instructions that are sent to ASM)
// c lang -S -emit-llvm -Ofast square.cpp -o square.ll
#include <iostream>
int square(int num){
    return num * num;
}

int main(){
    std::cout<<square(10)<<std::endl;
}