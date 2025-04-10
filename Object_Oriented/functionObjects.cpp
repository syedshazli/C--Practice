#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// struct that we want to call
struct isDivisible{
    int divisor;
    isDivisible(int newDivisor):divisor(newDivisor) {}

    // dividend is evenly divisible by divisor
    // ex dividend = 6, divisior = 3, operator returns 1
    bool operator()(int dividend){
        return dividend % divisor == 0;
    }

};


// any obkect where function call operator is defined
// functions with state associated with it (and data members)
// can call with functions
int main(){
    isDivisible tryTen(10);
    cout<<"Divisible by 10?? "<<tryTen(20)<<endl;

    vector<int> myVec = {20, 33, 94, 37, 60};
    auto iterator = ranges::find_if(myVec, tryTen);
    cout<<"Iterator value "<<iterator<<endl;
    return 0;
}