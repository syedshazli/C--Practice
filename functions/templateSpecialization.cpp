#include <iostream>
#include <array>
using namespace std;

template <typename mytemp>
void printArray(mytemp array){
    for(auto val: array){
        cout<<val<<" ";
    }
    cout<<endl;
}

template<>
void printArray(array<int,3> myArray){
    cout<<"Printing from template specialization"<<endl;
    cout<<"I handle the special case when the array is of size 3"<<endl;
}

int main(){
    array<int, 5> myArray = {1, 2, 3, 4, 5};
    printArray(myArray);

    array<int, 3> newArr = {2, 4, 6};
    printArray(newArr);

    array<float, 3> myFloat = {1.1, 2.2, 3.3};
    printArray(myFloat);

}