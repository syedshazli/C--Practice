#include <iostream>
#include <random>

int main(){
    // produces Non deterministic random numbers

    std::random_device rd;

    // mersene twister engine
    std::mt19937 mt(rd());
    std::uniform_int_distribution uniform(1,10); // nums between 1 - 10
   // std::poisson_distribution poisson(1, 20);
    for(int i = 0; i<5; i++){
        std::cout<<uniform(mt); // random number gen w/ uniform dist
        std::cout<<'\n';
    }
    std::cout<<'\n';

    return 0;
}