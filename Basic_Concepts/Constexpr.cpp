#include <iostream>
#include <random>
// evaluate value of function at compile time
constexpr int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}


// we might want some things compiled at compile time
int main(){

    std::random_device rd;
    constexpr intRes = factorial(6);
    int result = factorial(rd() % 6); // random numbers can only be generated at run time, not compile time
    std::cout<<result<<'\n';

}