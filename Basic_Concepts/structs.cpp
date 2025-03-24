#include <iostream>

// there's a difference between structs and classes
using namespace std;

struct points{
    int x;
    int y;

    // return type functions
    int getSum(int x, int y){
        return x+y;
    }
    // add functions that operate on data
    void print(){
        cout<<"X is equal to "<<x<<endl;
        cout<<"Y is equal to "<<y<<endl;
    }

};

int main(){
    points p1; // create a object
    p1.x = 10;
    p1.y = 20;
    // access functions
    p1.print();
    int sumP1 = p1.getSum(p1.x, p1.y);
    cout<<"Sum of P1 is "<<sumP1<<endl;
    // make a new object
    points p2;
    p2.x = 5;
    p2.y = -5;

    p2.print();
    int sumP2 = p2.getSum(p2.x, p2.y);
    cout<<"Sum of P2 is "<<sumP2<<endl;
}