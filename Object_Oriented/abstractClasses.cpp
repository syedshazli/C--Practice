#include <iostream>

using namespace std;

struct Animal{
    // declared as virtual func
    // = 0, means we cant make animal objects anymore
    virtual void speak() = 0;
};

// dog is a type of animal
// dog inherits from animal base class
struct Dog : Animal{
   
    // override prevents errors by telling compiler to expect speak to override from base class animal
    // compiler can tell us if we're overriding or not
     void speak() override{
        cout<<"Woof woof!"<<endl;
    }

};

// another derived class of the Animal
struct Cat : Animal{

   

    // overloading
    void speak() override{
        cout<<"Meow meow!"<<endl;
    }

};

int main(){
    // can declare base class to be abstract class
    // prevents us from creating objects of an abstract type
    // but lets us inherit from the class

    Dog dennis;
    dennis.speak();

    Cat george;
    george.speak();

    // but what if we never want an animal object, just traits we can inherit from!
    // This code will not work
    // Animal a;

    // upcasting is still allowed
    Animal &danny = dennis;
    danny.speak();

    Animal &chunky = george;
    chunky.speak();


    return 0;
}