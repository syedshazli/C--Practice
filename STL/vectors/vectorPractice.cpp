#include <vector>
#include <iostream>
using namespace std; 

void printingVectors(vector<int> myVec){
    for(int i = 0; i<myVec.size(); i++){
        cout<<myVec[i]<<' ';
    }
    cout<<endl;

    for(int i = myVec.size()-1; i>= 0; i-=1){
        cout<<myVec[i]<<' ';
    }

}

int main(){
    // challenge 1: create a vector of ints, add 5 elements to it, print all elements in reverse order

    vector<int> myVector;
    
    for(int i = 0; i<30; i+=6){
        myVector.push_back(i);
    }

    printingVectors(myVector);


    

    return 0;
}