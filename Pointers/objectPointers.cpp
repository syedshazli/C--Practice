#include <iostream>
#include <cstring>
using namespace std;

struct objectPointers
{
    int numPeople;
    string myName;

};


int main(){
    objectPointers myObj;
    myObj.numPeople = 6;

    objectPointers *pointerObj = &myObj;

    // edit the object using the pointer object
    pointerObj->myName = "Syed";

    cout<<"Num people of myObj is "<< pointerObj->numPeople<<endl;
    cout<<"My name is "<<pointerObj->myName<<endl;
}