#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

// pass by reference
void myRefFunction(int myNum, int &sameNum){

    int newNum = myNum + sameNum;
    cout<<"Numbers are "<<myNum<<" and "<<sameNum<<endl;
    cout<<"Sum is "<<newNum<<endl;

    sameNum+=1;
    cout<<"Incremented B to be "<<sameNum<<" in the myRefFunction"<<endl;
}

int main(){
    int a = 5;
    int &b = a;
    myRefFunction(a, b);

    cout<<"After function, b == "<<b<<endl;
    cout<<"And a == "<<a<<endl;

    return 0;
}