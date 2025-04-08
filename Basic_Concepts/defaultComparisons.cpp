#include <iostream>

using namespace std;

struct myClass{

    int a;
    int b;
    // allows us to implement <, =, > operators without needing 3 diff operators
    auto operator<=>(const myClass &classImp) const = default;
};

struct doBetter{

    int abc;
    int def;
    auto operator <=>(const doBetter &mydoBetter) const = default;
};

int main(){
    // to compike: g++ defaultComparisons.cpp -o dc --std=c++20

    myClass class1 {1,2}; // aggregate initialisation
    myClass class2 {1, 2};
    // will compare a and b of both objects
    // returns 1 if both are equal, 0 if not
    cout << (class1 == class2) <<endl;
    cout << (class1 < class2) <<endl;
    cout << (class1 > class2) <<endl;
    return 0;
}