#include <iostream>

union myUnion{
    int access;
    double triumph;
};

int main(){
    myUnion syedsUnion;
    syedsUnion.access = 2;
    syedsUnion.triumph = 5.0;
    std::cout<<"Memory locations of both data structures:"<<'\n';
    std::cout<<&syedsUnion.access << " "<<&syedsUnion.triumph;
}