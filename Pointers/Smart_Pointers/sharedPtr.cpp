#include <iostream>
#include <memory>
// want shared ownership of object?
// want your object freed once we're done with it?
// can't use uniquePtr! That's for unique ownership
// can't use raw pointers! No gurantee that will be freed

// so we used shared_ptr for co ownership of resource thru a pointer
// shared ptr guarantees our memory isn't freed or deleted till there are no references to the memory

using namespace std;
int main(){
    shared_ptr<int[]> myPtr(new int[20]); // dynamocally allocate memory, ask shared ptr to manage it
    auto secondPtr = myPtr; // now 2 references to same array of 20 integers
    auto thirdPtr = secondPtr; // a pointer set to secondPtr will just mean another reference to what secondPtr is pointing to (array of 20 ints)
    // memory is freed when all pointers go out of scope 
    cout<<"Reference count to array of 20 integers: "<<myPtr.use_count()<<endl;

    // using make_shared to allocated array of 30 ints (C++ 20 only)
    // auto makeSharedPtr = make_shared<int[]>(30);
    // auto ptrToMakeShared = makeSharedPtr;
    // auto thirdPtr = makeSharedPtr;
    // cout<<"Reference count to array of 30 integers: "<<makeSharedPtr<<endl;
   
   // try to modify contents of the sharedPtr
   myPtr[0] = 5;
   secondPtr[19] = 0x830;
   cout<<"Value in allocated memory using myPtr: "<<myPtr[0]<<endl;
   cout<<"Value in allocated memory using secondPtr: "<<secondPtr[19]<<". \nThis is the same value as in myPtr: "<<myPtr[19]<<endl;

    // implicit data type conversion (works due to implicit conversion done by C++, not exclusive to smart pointers)
    shared_ptr<int[]> twoPtr(new int[20]);
    twoPtr[0] = 3.48;
    cout<<"Two ptr when we try to improperly cast: " <<twoPtr[0]<<endl;

}