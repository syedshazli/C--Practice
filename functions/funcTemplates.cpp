#include <array>
#include <iostream>
#include <vector>
using namespace std;

// user can specify type t when they call the function
// can avoid heavy operator overloading seen in overLoading.cpp with func tempaltes
//template<typename Template>
// C++ 20: use auto array as such: void printArray(auto array){}
// to run: g++ funcTemplates.cpp -o funcTemp --std=c++20
// ./funcTemp

// we can pass in an array of ints, floats, etc of any size. and we can also pass in std::vectors too! As long as it's any list it will work
template<typename Template>
void printArray(Template array){
    // note: auto is pretty important here bcz we dont know type of data
    for (auto val: array){
        cout<<val<<" ";
    }
    cout<<endl;

}

int main(){
    // don't want to write a different version for each type of input
    array<int, 3> myIntArray = {1,2,3};
        // doesn't permanently affect printArray function either
       //also works: printArray<array<int, 3>>(myIntArray);
       printArray(myIntArray);

    // can change size of array as well
    array<int, 5> fiveArray = {1, 2, 3, 4, 5};
        printArray(fiveArray);
    array<float, 3> myFloatArray = {1.3, 2.2f,3.1f};
      // also works  printArray<array<float, 3>>(myFloatArray);
      printArray(myFloatArray);
    
      // this also works!! 
      std::vector<int> tryThis={1,2,3,4,5};
      printArray(tryThis); 

    return 0;
}