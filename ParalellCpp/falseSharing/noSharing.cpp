#include <iostream>
#include <vector>
#include <array>
#include <thread>

// only place atomic ints every 64 bytes so that we escape our 4 different counters being in diff cachelines
struct AlignedAtomic{
    alignas(64) std::atomic<int> counter = 0;
};

int main(){

    const int numIterations = 1 <<20;

    // num threads to spawn
    const int numThreads = 4;


    // atomic ints to be incremented
    // each thread gets its own counter to handle the increments itselves
    // combine partial results into a final sum var
    std::array<AlignedAtomic, 4> myCounters;
    std::atomic<int> finalSum = 0;

    // num elements to process per thread
    const int elementsPerThread = numIterations/numThreads;


    // lambda function!
    auto work = [&](int tid){
        for(int i = 0; i < elementsPerThread; i++){
            myCounters[tid].counter++;
        }

        finalSum += myCounters[tid].counter;
    };

    // if we write to our int it still invalidates everyone elses cache since it was on the same cacheline
    std::vector<std::jthread> threads;
    for(int i = 0; i< numThreads; i++){
        threads.emplace_back(work, i);
    }
    return 0;

}