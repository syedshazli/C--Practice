#include <vector>
#include <atomic>
#include <thread>
#include <array>


int main(){

    const int numIterations = 1 <<10;

    // num threads to spawn
    const int numThreads = 4;


    // atomic ints to be incremented
    // each thread gets its own counter to handle the increments itselves
    // combine partial results into a final sum var
    std::array<std::atomic<int>, 4> myCounters = {0,0,0,0};
    std::atomic<int> finalSum = 0;

    // num elements to process per thread
    const int elementsPerThread = numIterations/numThreads;


    // lambda function!
    auto work = [&](int tid){
        for(int i = 0; i < elementsPerThread; i++){
            // when this is beign updated, it still invalidates any local copies of myCounters[tid]
            myCounters[tid] +=1;
        }

        finalSum += myCounters[tid];
    };

    // if we write to our int it still invalidates everyone elses cache since it was on the same cacheline
    std::vector<std::jthread> threads;
    for(int i = 0; i< numThreads; i++){
        threads.emplace_back(work, i);
    }
    return 0;
}