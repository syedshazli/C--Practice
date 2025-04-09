#include <iostream>
#include <memory> // for unique ptr
#include <string>

using namespace std;

// can create differnet versions of dynamic array based on T
template <typename Temp>
struct DynamicArray{

    int size;
    unique_ptr<Temp[]> myPtr;
    // constructor to initialise size of array and allocated space for array
    DynamicArray(int newSize) : size(newSize), myPtr(new Temp[newSize]){}


    void fill(Temp val){

        for(int i = 0; i<size; i++){
            myPtr[i] = val;
        }

    }

    void print(){
        for(int i = 0; i<size; i++){
            cout<<myPtr[i]<<' ';
        }
        cout<<endl;
    }

};

int main(){
    // example: vector is just a class template
    // similar to function templates
   
   // can instantiate different version of dynamic array created
   // compiler makes differnet versions of struct based on diff data types
   DynamicArray<int> intArr(10);
    intArr.fill(4);
    intArr.print();

   DynamicArray<float>floatArr(10);
   floatArr.fill(2.75);
   floatArr.print();

   DynamicArray<string> stringArr(10);
   stringArr.fill("Jockey");
  
   stringArr.print();

    return 0;
}