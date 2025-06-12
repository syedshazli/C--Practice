#include <iostream>
#include <map>
int main(){

    int i = 0;
    switch (i){
        case(0):
            std::cout<<0;
        
    
        case(1):
            std::cout<<1;
        
        case(2):
            std::cout<<2;

        case(3):
            std::cout<<3;


        case(4):
            std::cout<<4;
        
        case(5):
            std::cout<<5;

        }
    std::map myMap;
    for(int i = 0; i<5; i++){
        myMap[i] = i;
    }
}