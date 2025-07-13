#include <atomic>
#include <cassert>
#include <chrono>
#include <thread>
#include <vector>
#include <iostream>

int main(){

    const int numIterations = 1 << 25;
    const int numThreads = 8;
    const int itemsPerThread = numIterations/numThreads;

    // shared val for increment
    std::atomic<int> sink = 0;


    // create lambda
    auto work = [&](){
        // nonblocking becuase other threads aren't put to sleep
        // lock free because only one thread is doing atomic increment
        // wait free because ALL threads can do atomic increment

        // threads aren't forced to spin around in dowhile loop
        for(int i = 0; i<itemsPerThread; i++){
            sink++;
        }
    };



 std::vector<std::jthread> threads;
    for(int i = 0; i< numThreads; i++){
        threads.emplace_back(work);
    }
    
}