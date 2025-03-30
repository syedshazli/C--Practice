#include <iostream>
#include <memory>
#include <utility>

using namespace std;



int main(){

    // shift over resources to new unique pointer
    // can move unique ptr but can't copy it
    // instead take the memory away 
    // ptr no longer has array of 10 ints

    /**
     * Value categories
     * LValues
     *  Left hand side of an assignment expression
     * 
     * RValues
     *  Right hand side of an assignment expression
     *  might be intermediete value
     * 
     * LValues, we can have references to them but we can copy them
     * RValues, we usually move them
     * 
     * LValues can be RValues through std::move
     * std::move tells the compiler that you are allowed to move this
     */


    // make unique ptr, can't assign other pointers to this
    auto ptr = make_unique<int[]> (10);
    cout<<"Ptr before move: "<<ptr.get()<<endl;
    auto ptr2 = move(ptr); // steals resources from ptr

    // will become null now!
    cout<<"Ptr after move: "<<ptr.get()<<endl;
    
    // will be the same memory address as the old ptr!
    cout<<"Ptr2 after move: "<<ptr2.get()<<endl;

}