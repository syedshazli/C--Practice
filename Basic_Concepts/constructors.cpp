#include <iostream>
using namespace std;

struct Point{
    int x;
    int y;

    // make constructor (no return type)
    // will never call the constructor
    // will override any values declared in struct
     // Point():x(1), y(20){} // same thing as above
    Point(){
        x = 20;
        y = 10;
        cout<<" Hello from cosntructor!"<<endl;
    }

    // can have multiple constructors
    // this is the same as Point(int myX, int myY) : x(myX), y (myY){}
    Point(int myX, int myY){
        x = myX;
        y = myY;
    }

   

    void Print(){
        cout<<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
    }
};

int main(){
    Point p1;
    Point p2(5, 10);
    p1.Print();
    p2.Print();
    return 0;
}