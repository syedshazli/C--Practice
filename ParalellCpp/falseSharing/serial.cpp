#include <iostream>
#include <atomic>
#include <vector>
#include <thread>
// we want to prevent cache coherency issues and different memory storage
int main(){

    // totoal number of iterations to run
    const int numIterations = 1<<10;

    // total number of threads needed
    const int numThreads = 1;

    // atomic int to increment
    // atomic so that it doesn't have any data races
    // almost like a mutex for the int
    std::atomic<int> counter = 0;

// CREATE A LAMBDA FUNCTION
    auto work = [&](){

        for(int i = 0; i<numIterations; i++){
            counter++;
        }

    };

    std::vector<std::thread> threads;
    for(int i = 0; i<numThreads; i++){
        // spawn threads by creating a thread in the array of threads to do work
        threads.emplace_back(work);
    }
    return 0;
}