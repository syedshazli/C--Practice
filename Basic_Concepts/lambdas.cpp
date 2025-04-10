#include <iostream>

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
    

}