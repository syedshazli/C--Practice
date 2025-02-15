#include <iostream>
#include <array>
using namespace std;

// void as we don't return anything
void printArray(array<int, 3> userArray){
    for(int value: userArray){
        cout<< value << " ";
    }
    cout<<"\n"<<endl;
}

int main(){
    array<int, 3> myArray = {1, 2,3};
    printArray(myArray);

    array<int, 3> newArray = {4, 5, 6};
    printArray(newArray);

    return 0;
}