#include <iostream>
#include <span>
#include <vector>
#include <random>

void generateData(std::span<int> data){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution dist(1,100);

    // generate data
    for( auto &value : data){
        value = dist(mt);
    }

}


// process data and dummy work
void processData(std::span<int> data){
    for(int i = 0; i<5; i++){
        for(auto &value : data){
            value %= value + 1;
        }
    }
}


int main(){

// our bufer named data with 2^20 elements
std::vector<int> data;
data.resize(1 << 20);

for(int i = 0; i<100; i++){
    generateData(data);
    processData(data);
}

}