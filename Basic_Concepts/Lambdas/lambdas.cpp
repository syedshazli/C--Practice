#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

// lambads allow us to create unnamed function object without having to define a struct/class

// struct isDivisible{
//     int divisor;
//     isDivisible(int newDivisor) : divisor(newDivisor){}
//     bool operator()(int dividend){
//         return dividend%divisor == 0;
//     }
// };

int main(){

    // instread of making function object, make it a lambda expreission
    // completely replaces the class defined above
    auto is_divisible_by_10 = [divisor = 10](int dividend){
        return dividend%divisor == 0;
    }; // parameters using ()

    // can now use lambda exp throughout the rest of the time
    vector<int> myVec = {19, 22, 41, 69, 21, 90};
    // iterator returns first number inside of range that has remainder of 0 is 90
    auto iterator = ranges::find_if(myVec, is_divisible_by_10);
    cout<<iterator<<endl;

}