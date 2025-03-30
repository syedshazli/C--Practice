#include <iostream>
#include <memory>
#include <utility>
#include <vector>

using namespace std;

struct dip{

dip(){
    cout<<"Constructor"<<endl;
}
dip(const dip &s){
    cout<<"Copy constructor"<<endl;
}

dip(dip &&ex){
    cout<<"Move constructor"<<endl;
}

};

int main(){

    vector<dip> myVec;
    dip d; // d is a LValue

    myVec.push_back(move(d));
    // because we have a copy constructor we dont have move by default
    // only done if there are no user defined copy constructors
    cout<<endl;
    // will be consdiered rvalue reference since it's not a Lvalue
    myVec.push_back(move(dip()));
}