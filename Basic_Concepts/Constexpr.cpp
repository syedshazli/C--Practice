#include <iostream>
#include <random>
// evaluate value of function at compile time, result of call to add is known at run time and not evaluated at run time
constexpr int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

// constexpr cant be a function parameter, why?
// this returns an error void returnMe(contexpr int val){}
// why? parameters are treated as runtime values. the compiler cannot guarantee that the function will only ever be called with compile-time constants.
// use non type template params instead e.g template <int N>


// we might want some things compiled at compile time
int main(){

    std::random_device rd;
    constexpr int intRes = factorial(6);
    int result = factorial(rd() % 6); // random numbers can only be generated at run time, not compile time
    std::cout<<result<<'\n';

}