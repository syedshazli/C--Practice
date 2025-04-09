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

    doBetter(int newAbc, int newDef) : abc(newAbc), def(newDef) {}

    auto operator+(const doBetter &mydoBetter){
        return doBetter(abc + mydoBetter.abc, def+mydoBetter.def );
    }

    void print(){
        cout<<"ABC == "<<abc<<endl;
        cout<<"DEF == "<<def<<endl;
        cout<<endl;
    }

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

    cout<<endl;
    doBetter myAlph {123, 456};
    doBetter secondAlph {789,101112};

    doBetter resultObj = myAlph+secondAlph;
    resultObj.print();

    return 0;
}