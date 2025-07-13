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
        for(int i = 0; i<itemsPerThread; i++){
            // read current val
            int desired;
            int expected = sink.load();
            do{
                desired = expected + 1;
            } while(!sink.compare_exchange_strong(expected, desired));
        }
    };



 std::vector<std::jthread> threads;
    for(int i = 0; i< numThreads; i++){
        threads.emplace_back(work);
    }
    
}