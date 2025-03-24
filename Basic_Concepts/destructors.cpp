#include <iostream>
#include <memory>
using namespace std;

// object is getting out of scope or dynamically allocated, and we delete
    // want to clean up our objects?
    // use a destructor!

// object goes out of scope, then we dont need to worry about memory dealloc
struct myNewArrayStruct{
    unique_ptr<int[]> newArr;
    myNewArrayStruct(int size) : newArr(new int[size]){}
};

struct IntArray{
    int *array;

    // constructor, constructors never have retur type
    IntArray(int size){
        array = new int(size);
    }

    // destructor represented with ~
    ~IntArray(){
        cout<<"From the IntArray: About to destroy your array!"<<endl;
        delete[] array;
    }

};

int main(){
    
    IntArray myArr(20); // dynamically allovate array of 20 ints
    myArr.array[0] = 20;
    myArr.array[5] = 100;
    cout<<"first element of manually dealloced array is "<<myArr.array[0]<<endl;
    // memory leak right now because of dynamic allocation
    //need to use destructor

    cout<<"Now I don't need to use destructors "<<endl;
    myNewArrayStruct syedsArr(100);
    syedsArr.newArr[99] = 0x345;
    cout<<"Syeds new arr allocated with unique ptr, no need for destructor. "<<endl;
    cout<<"Last element in this array is "<<syedsArr.newArr[99]<<endl;
    return 0;
}