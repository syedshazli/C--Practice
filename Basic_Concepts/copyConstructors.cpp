#include <iostream>

using namespace std;

struct Point{
    int x;
    int y;


    Point(int newX, int newY) : x(newX), y(newY){}
    
   // Point(const Point &p) = delete; used if we dont want a copy constructor, such as unique pointers

    // create new point based on pass by reference
    // const to make sure it's not changing the original point
    Point(const Point &myPoint){
        cout<<"Hello from copy constructor!"<<endl;
        x = myPoint.x;
        y = myPoint.y;
    }


    void print(){
        cout <<"X is "<<x<<endl;
        cout<<"Y is "<<y<< endl;
    }
}; 

int main(){
// create a new obkect based on an existing object initialised in main
// create new object based on p1 

    Point p1(2, 4);
    p1.print();

    // doesnt modify og object
    Point p2 = p1;
    p2.y = 70; // p2.x will be 2, p2.y will be changed
    p2.print();

}