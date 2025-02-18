#include <array>
#include <iostream>

using namespace std;

// example of redundant code without operator overloading

// void printIntArray(array<int, 3> myArray){
//     for(int item:myArray){
//         cout<<item<<"";
//     }
//     cout<<endl;
// }

// void printFloatArray(array<float, 3> myArray){
//     for(float item: myArray){
//         cout<<item<<" ";
//     }
//     cout<<endl;
// }

// let the compiler tell the difference based on inputs
// two functions with identical signatures will get us an error, even if bodies are different
void printArray(array<int, 3> myArray){
    for(int item:myArray){
        cout<<item<<" ";
    }
    cout<<endl;
}

// try changing from 3 to 2 and see the errors and warnings
void printArray(array<float, 3> myArray){
    for(float item: myArray){
        cout<<item<<" ";
    }
    cout<<endl;
}

int main(){
    array<int, 3> myIntArray = {1, 2, 3};
    //printIntArray(myIntArray);

    array<float, 3> myFloatArray = {1.3f, 2.3f, 3.1f};
    //printFloatArray(myFloatArray);
    printArray(myIntArray);
    printArray(myFloatArray);
    return 0;
}