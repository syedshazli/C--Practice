#include <iostream>

using namespace std;

void pointMe(int *aNum){
    cout<<"aNum is "<<aNum<<endl;
    cout<<"*anum is "<<*aNum<<endl;
    cout<<"&anum is "<<&aNum<<endl;
}

void pointMeArray(int *bNum){
    cout<<"bNum is "<<bNum[0]<<endl;
    cout<<"&bnum is "<<&bNum[0]<<endl;
}

int main(){
    // & is address of operator
    // good to get address of an integer and pass by reference
    // can we store the address in a location?
    // yes, thats what we use a pointer for!
    // int a = 5;
    // int &b = a; // reference to a. if we change b or a we are changing whats in memory location of a
    // what if we want to store address of a?

    // pointers to arrays with pbr works for passing in pointers and the arrays themselves
    int myArrayForPointer[] = {1, 2, 3};
    int* pointerToArr = myArrayForPointer;
    pointMeArray(pointerToArr);
    pointMeArray(myArrayForPointer);

    int a = 5;
    int *b = &a; // b is a pointer, pointing to memory address of an integer
    
    // SO A POINTER NEEDS TO BE ASSIGNED TO A MEMORY ADDRESS, NOT JUST A NORMAL INT
    // And pointers need to be of same type as what you are pointing to
    cout<<"a = "<<a<<endl;
    cout<<"b = " << b<<endl; // gets us an address
    cout<<"address of a  = "<<&a<<endl;
    cout<<"B is storing the address of a, pointing to the address of a"<<endl;

    // access value of pointer with dereferencing
    // set x to 10, storing address of x inside of z
    // changing x using z
    int x = 10;
    cout<<"X before Z changes it: "<<x<<endl; 
    int *z = &x;
    *z += 20;
   // double *b = &x; NOTICE HOW THIS IS NOT ALLOWED DUE TO IMPROPER TYPES, ITS ALLOWED IN SMART POINTERS
    
    cout<<"X after Z changes it "<<x<<endl;
  
    cout<<endl;
    int myNumber = 5;
    int *pointToMyNum = &myNumber;
    // function asks for type pointer
    pointMe(pointToMyNum);
}