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
myStruct newObj(10);
myVector.push_back(newObj); // copy constructor

// done using move
myStruct usingMove(2);
myVector.push_back(move(usingMove));

// done using dynamic alloc of object
myVector.push_back(myStruct(1));

// there's a cost of constantly doing copies
// so we use emplace back
// appends new element to container (vector)
// constructs element in place at location of container
// construct object inside memory by vector
myVector.emplace_back(60);

}