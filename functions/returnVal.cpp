#include <array>
#include <iostream>
#include <vector>

using namespace std;

// we want to return the integer result
int sum(array<int, 3> array){
    int sum = 0;
    for(int val: array){
        sum += val;
    }

    return sum;

}

// std: vector implementation, notice how we don't have to specify size of vector
int sumVec(vector<int> array){
    int sum = 0;
    for(int val: array){
        sum += val;
    }

    return sum;

}

int main(){
    array<int, 3> myArray = {1, 2, 3};
    int myArraySum = sum(myArray);
    cout<<"Sum of array is " <<myArraySum<<endl;


    vector<int> myVec = {1, 2, 3};
    vector<int> myVec2 = {1, 2, 3, 4};
    cout << "testing stl function on myVec, sum is "<<sumVec(myVec)<<endl;
    cout << "testing stl function on myVec2, sum is "<<sumVec(myVec2)<<endl;
    

    return 0;
}

