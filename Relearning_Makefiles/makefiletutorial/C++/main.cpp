#include "refer.hpp"
#include <iostream>

using namespace std;



int main(){
    cout<<"Greetings, this is main.cpp, I am going to try and get a function from refer.hpp which refers to refer.cpp. Wish me luck"<<endl;
    printFromRefer();
    cout<<endl;
    cout<<"Nice, it worked! Now let's try and get addition."<<endl;
    int result = getAddition(10, 20);
    cout<<"Result of adding 10 and 20 was "<<result<<endl;
}