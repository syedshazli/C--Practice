#include <iostream>
#include <vector>
#include <thread>
#include <atomic>
int main(){

    // number of iterations to run
    const int numIterations = 1<<10;

    // number of threads to spawn (3 more than serial imp)
    const int numThreads = 4;

    // num elements to process per thread
    // each thread takes 25% of the work
    const int ElementsPerThread = numIterations / numThreads;

    // atomic int to increment
    // threads will fight over this and invalidate every threads copy of it any time an increment is desired
    std::atomic<int> counter = 0;


    // SAME LAMBDA AS BEFORE
    auto work = [&](){
        for(int i = 0; i<ElementsPerThread; i++){
            counter++;
        }
    };


    std::vector<std::jthread> threads;
    for(int i = 0; i<numThreads; i++){
        // spawn threads by creating a thread in the array of threads to do work
        threads.emplace_back(work);
        
    }
    return 0;



}