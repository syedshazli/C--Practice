//page 850 deitel & deitel
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> myVec){
    for (auto val: myVec){
        cout<<val<<' ';
    }
    cout<<endl;
}

int main(int argc, char* argv[]){

    // we have std: array, but we might not know size of array
    // we need a container that can grow or shink dynamically

    vector<int> myVector; // not needed to specify elements

    // printVector(myVector);

    // // using push_back (adds element to end of vector)
    // myVector.push_back(20);
    // printVector(myVector);

    // // using pop_back to remove last element
    // myVector.pop_back();
    // printVector(myVector);

    // what goes on in memory?
    // capacity method: number of elements memory has space for
    // if we have no space, vector has to do reallocation to find more space

    myVector.reserve(10); // comment out if you want capacity to double everytime we fill size
    for(int i = 0; i<10; i++){
        cout<<"Size: "<<myVector.size()<<endl;
        cout<<"Capacity: "<<myVector.capacity()<<endl;

        myVector.push_back(i); // 10 push backs expected
        // size and capacity at start of iteration?
// as you can see below, capacity increases by 2x everytime we run out of space
        // continual allocation isnt good for performance
        // use storage method if we know how many elements that could be in vec
// Size: 0
// Capacity: 0
// Size: 1
// Capacity: 1
// Size: 2
// Capacity: 2
// Size: 3
// Capacity: 4
// Size: 4
// Capacity: 4
// Size: 5
// Capacity: 8
// Size: 6
// Capacity: 8
// Size: 7
// Capacity: 8
// Size: 8
// Capacity: 8
// Size: 9
// Capacity: 16

    }


    return 0;
}