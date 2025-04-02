#include <iostream>
#include <vector>
#include <string>
using namespace std;

// many shapes = polymorphism
// treat objects of different types as the same type
// treat objects of same derived class as their base class
// for our stl containers we can then put these objects in the same container

struct Animal{
    string name;

    Animal(string givenName) :name(givenName){}

    void speak(){
        cout<<"Im just a chill animal named "<<name<<endl;
    }
};

// dog is a type of animal
// dog inherits from animal base class
struct Dog : Animal{
    string name;
    Dog(string myName): Animal(myName){
        name = myName;
    }
    // overloading
    void speak(){
        cout<<name<<" says "<<"Woof woof!"<<endl;
    }

};

// another derived class of the Animal
struct Cat : Animal{

    string name;
    Cat(string myName): Animal(myName){
        name = myName;
    }

    // overloading
    void speak(){
        cout<<name<<" Says "<<"Meow meow!"<<endl;
    }

};

int main(){
    Dog oreo("Oreo");
    oreo.speak();

    Cat roger("Roger");
    roger.speak();

    Animal tiggy("Tiggy");
    tiggy.speak();

    // vectors can only have objects of the same type
    // so if we had no inheritance we couldn't group all animals

    // reference of type animal, and we pass in a dog object
    // because animal is inherited as a dog, we can interpret a dog as a animal
    Animal &a1 = oreo;
    a1.speak(); // doesn't print as a dog, print's as a n animal

    Animal &a2  = roger;
    a2.speak();
}