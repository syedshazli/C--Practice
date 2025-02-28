#include <vector>
#include <iostream>
#include <algorithm>
using namespace std; 

void printingVectors(vector<int> myVec){
    for(int i = 0; i<myVec.size(); i++){
        cout<<myVec[i]<<' ';
    }
    cout<<endl;

    for(int i = myVec.size()-1; i>= 0; i-=1){
        cout<<myVec[i]<<' ';
    }
    cout<<endl;
}


void printArr(vector<int> myVec){
    for(int i = 0; i<myVec.size(); i++ ){
        cout<<myVec[i]<<' ';
        
    }
    cout<<endl;
}

bool comp(int a, int b) {
      return a > b;
}

int main(){
    // challenge 1: create a vector of ints, add 5 elements to it, print all elements in reverse order

    vector<int> myVector;
    
    for(int i = 0; i<30; i+=6){
        myVector.push_back(i);
    }

    printingVectors(myVector);


   // Create a vector of random integers, then sort it in both ascending and descending order.
   // Print the vector after each sort.

   vector<int> unsortedVecAsc = {2, 1, -30, 40};
   printArr(unsortedVecAsc);

    // print in ascending order
   sort(unsortedVecAsc.begin(), unsortedVecAsc.end());
   printArr(unsortedVecAsc);

    
    vector<int> unsortedVecDesc = {2, 1, 70, 40};
    printArr(unsortedVecDesc);
    // seg fault here
    sort(unsortedVecDesc.end(), unsortedVecDesc.begin());
    printArr(unsortedVecDesc);


    return 0;
}