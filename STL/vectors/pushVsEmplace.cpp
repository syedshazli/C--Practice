#include <vector>
#include <iostream>
#include <utility>
using namespace std;

struct myStruct{
    int x;


    myStruct(int newX): x(newX){
        cout<<"Constructor "<<endl;
    }

    myStruct(const myStruct &ex): x(ex.x){
        cout<<"Copy constructor"<<endl;
    }

    myStruct(myStruct &&example){
        cout<<"Move constructor"<<endl;
    }

};

int main(){

// we want dynamically sized arrays, we must know how to use it well
vector<myStruct> myVector;


}