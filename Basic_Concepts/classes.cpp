// structs differ from class with acces specifier
#include <iostream>
using namespace std;

class Point{
    int x; 
    int y;

public:
    // setters or getters: ways to interact but not modify
    // we are allowed to access our private variables since we're in class
    void set_x_y(int newX, int newY){
        // can make sure newX and newY are in bounds by checking
        x = newX;
        y = newY;
    }
    void print(){
        cout<<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
    }

};

int main(){
    // public, protected, and private 
    // by default in struct, by default all members are public
    // by default for classes, members are private outside of the class
    // so functions print can access the variables but outside of the class (like in main) we can't
    // so in a class, if we make everything public, it's a struct

    Point p1;
    p1.set_x_y(5, 7);
    p1.print();
    // main differnece is accessing memebrs of class 
    //  using access specifiers
    Point p2;
    // p2.x = 10 won't work without public in class
}