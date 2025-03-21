#include "refer.hpp"
#include <iostream>

using namespace std;



int main(){
    cout<<"Greetings, this is main.cpp, I am going to try and get a function from refer.hpp which refers to refer.cpp. Wish me luck"<<endl;
    printFromRefer();
    cout<<endl;
    cout<<"Nice, it worked! Now let's try and get addition."<<endl;
    getAddition(10, 20);
}