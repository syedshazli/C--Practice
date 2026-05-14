#include <iostream>

int main()
{
    float grade = 4.0;
    auto printHello = [&](int age){ // use & to allow pass by ref for any variables that exist currently before the func. Can also do &grade
        grade = 2.9;
        std::cout<<"This is the message, where you are "<<age<<" years old"<<std::endl;
    };

    printHello(10);
    std::cout<<"After using capture, grade is now "<<grade;
}