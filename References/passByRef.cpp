#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

// pass by reference
// remove the & from sameNum to see what no pass by reference does
// essentially, no variables you edit get changed
void myRefFunction(int myNum, int &sameNum){

    int newNum = myNum + sameNum;
    cout<<"Numbers are "<<myNum<<" and "<<sameNum<<endl;
    cout<<"Sum is "<<newNum<<endl;

    sameNum+=1;
    cout<<"Incremented B to be "<<sameNum<<" in the myRefFunction"<<endl;
}

// uses the memory address of the variable given by input, so that we can operate on given input
void appendElements(vector<int> &vec, int N){
    for(int i = 0; i< N; i++){
        vec.push_back(i);
    }
}

int main(){
    int a = 5;
    
    int &b = a;
    myRefFunction(a, b);

    cout<<"After function, b == "<<b<<endl;
    cout<<"And a == "<<a<<endl;

    vector<int> myVec;
    appendElements(myVec, 10);
    // expected result w/no pbr : we dont see anything bc myVec was passed by value
    for(auto i: myVec){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}