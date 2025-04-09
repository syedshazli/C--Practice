#include <iostream>

using namespace std;

// base class A
// 2 derived class B and C
// D class which derives from B and C
// D inherits from A twice
//  1. through C
//  2. through B 
struct A{
    A(){
        cout<<"Constructing A"<<endl;
    }
};

struct B: virtual A{
    B(){
        cout<<"Constructing B"<<endl;
    }
};

struct C: virtual A{
    C(){
        cout<<"Constructing C"<<endl;
    }
};


struct D: B, C{
    D(){
        cout<<"Constructing D"<<endl;
    }
};

// can have derived classes inherit from base classes
// basics of the diamond problem
int main(){
    // have an A type twice
    D objD;
    // as a result, can't create reference to A based on D
    
    // virtual base classes
    // if we call A, in the most derived class I only get 1 subobj of A

    // we can now make a ref to an object D once we make A virutal
    //A &a = objD;

    // when would you not want a virtual inheritance?

}