#include <iostream>
#include <string>
using namespace std;

// inheritance and derived classes
// so far just have individual structs/classes
// but when we have overlap in implemented methods/data, use inheritance!!

// classes that inherit are derived classes

struct base{
    int x;
    int y;

    base(int newX, int newY): x(newX), y(newY){}
      

    void printXY(){
        cout<<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
    }

};

// class to take methods : class to inherit from 
struct derivedFromBase : base{
    int z;

    // constructor to initialise/set variables
   derivedFromBase(int newX, int newY, int newZ) : base(newX, newY), z(newZ){}

    // derivedFromBase(int newX, int newY, int newZ){
    //     base(newX, newY);
    //     z = newZ;
    // }

    void printZ(){
        cout<<"Z = "<<z<<endl;
    }

};


struct derivedFromBase2 : base{
    string sayHi;

    derivedFromBase2(int newX, int newY, string sayingHi) : base(newX, newY), sayHi(sayingHi){}

    void assertYourself(){
        cout<<"I'm from derivedFromBase2"<<endl;
    }

    void tellYourString(){
        cout<<"String is:  "<<sayHi<<endl;
    }

};

int main(){
    derivedFromBase object1(5, 10, 15);

    object1.printXY();
    object1.printZ();

    derivedFromBase2 object2(1, 2, "What's up! I'm Object 2");
    object2.assertYourself();
    object2.printXY();
    object2.tellYourString();
    

}