#include <array>
#include <iostream>
using namespace std;

// user can specify type t when they call the function
//template<typename Template>
// C++ 20: use auto array as such: void printArray(auto array){}
// to run: g++ funcTemplates.cpp -o funcTemp --std=c++20
// ./funcTemp

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

    array<float, 3> myFloatArray = {1.3, 2.2f,3.1f};
      // also works  printArray<array<float, 3>>(myFloatArray);
      printArray(myFloatArray);

    return 0;
}