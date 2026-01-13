// Online C++ compiler to run C++ program online
#include <iostream>

struct Dog
{
    int oldAge;
    Dog(int age) : oldAge(age){
        std::cout<<"New age is "<<oldAge;
    }
};

Dog returnDog(int dogAge){
    Dog myDog(dogAge);
    return myDog;
}
int main() {
    
    // Write C++ code here
    Dog newDog = returnDog(3);
    

    return 0;
}