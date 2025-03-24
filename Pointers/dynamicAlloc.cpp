#include <iostream>

using namespace std;

int main(){

    // allocate using new
    // returns pointer to memory we just allocated
    int *intPtr = new int; // requests space for a int
    *intPtr = 2000;
    cout<<"Value: "<<*intPtr<<endl;
    cout<<"Address: "<<&intPtr<<endl;

    // must free memory used
    delete intPtr;

    int *arrPtr = new int[10]; // pointer points to beginning of array of 10 ints
    *arrPtr = 500; // first element in array is 500
    cout<<"Value: "<<*arrPtr<<endl;
    cout<<"Addy: "<<&arrPtr<<endl;

    // change something other than first element
    // do not use *
    arrPtr[2] = 200;
    cout<<"Value of 3rd element "<<arrPtr[2]<<endl;
    cout<<"Addy: "<<&arrPtr[2]<<endl;
    
    delete[] arrPtr; // use delete [] if we want to delete array

}