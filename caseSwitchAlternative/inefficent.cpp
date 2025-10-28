#include <iostream>
#include <map>

int callFunc(int i)
{

}
int callSwitch(int i)
{
switch (i){
        case(0):
            return callFunc(i) +2;
        
    
        case(1):
            return callFunc(i) +7;
        
        case(2):
            return callFunc(i) +1;

        case(3):
            return callFunc(i) +3;


        case(4):
            return callFunc(i) +5;
        
        case(5):
            return callFunc(i) +4;

        }
}
int main(){

    int i = 0;
    
    std::map<int,int> myMap;
    for(int i = 0; i<5; i++){
        
        myMap[i] = callSwitch(i);
    }
}