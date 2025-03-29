#include <iostream>

using namespace std;


struct Point{
    int x;
    int y;

    // constructor --> x = newX, y = newY 
    // example: Point p(20, 30);
    Point(int newX, int newY) : x(newX), y(newY){}

    // we dont want to copy or modify it, pbr
    // operator + is just like another function
    Point operator+(const Point &rhs){
        return Point(x+rhs.x, y+rhs.y); // received from arg
    }

    Point operator-(const Point &rhs){
        return Point(x-rhs.x , y-rhs.y );
    }

    Point& operator+=(const Point &rhs){
        x = rhs.x+x;
        y = rhs.y+y;
        return *this; // pointer to our original object
    }

    void print(){
        cout<<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl; 
        cout<<endl;       
    }
  

};

int main(){
    Point myP(1,2);
    Point yourP(3, 4);

   // Point P3 = myP + yourP; we want P3 = (20+1, 30+10)
   Point p3 = myP + yourP;
   
    p3.print();

    // - operator that we defined
   Point pMinus = p3 - myP;
   pMinus.print();


    // modify something in place
    myP += pMinus; 
    myP.print();
 
}