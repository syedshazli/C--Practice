#include <iostream>

using namespace std;

// static polymorphosim with our previous example in poly.cpp
// we dont have to know underlying derived class, but we might wanna know

// member functions whose behavior can be overwritten
// overwritten behavior is preserved

// derived class thats been upcasted with pointer, if we use undercasted function, we would still use derived class
// upcast when called functions --> retain behavior of derived class



struct Animal{
    string name;

    Animal(string givenName) :name(givenName){}

    virtual void speak(){
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
    // declared to be virtual

    // override prevents errors by telling compiler to expect speak to override from base class animal
    // compiler can tell us if we're overriding or not
     void speak() override{
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
    void speak() override{
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


    // reference from base class
    // instead of chill animal we should get our dog speak method
    // retain derived class speak func
    Animal &a1 = oreo;
    a1.speak(); // doesn't print as a dog, print's as a n animal

    Animal &a2  = roger;
    a2.speak();
}