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

    // can also take memory from shared pointers
    shared_ptr<int> myPtr(new int);
    *myPtr = 5; // change value of whats stored in pointer
     auto sharing = myPtr;
     auto ptr3 = move(myPtr);
    cout<<"Ptr 3 is now "<<ptr3.get()<<" and its value is "<<*ptr3<<endl;
    cout<<"my shared pointer is now "<<myPtr.get()<<endl;
    // still retains access because we didn't specify sharing in move()
    cout<<"Sharing pointer is now: "<<sharing.get()<<endl;
}