// if we cancelled a thread in a program, it wouldnt block threads of other app
//
#include <atomic>
#include <cassert>
#include <chrono>
#include <thread>
#include <vector>
#include <iostream>
#include <mutex>

int main(){
    // set up num increments
    const int numIterations = 1 << 15;
    const int numThreads = 8;

    // share val to increment
    volatile int sink = 0;

    // mutex to protect incrementation op.
    std::mutex m;

    auto work = [&]() {
        while(true){
            std::lock_guard<std::mutex> lg(m);
            if(sink == numIterations) break;
            sink = sink + 1;
        }
    };

    // run for 1 thread

    auto slowWork = [&](){
        while(true){
            std::lock_guard<std::mutex> lg(m);
            if(sink == numIterations) break;
            // sleep while holding lock
            // causes issues for other threads who need the lock
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
            sink = sink + 1;
        }
    };



    std::vector<std::jthread> threads;
    for(int i = 0; i< numThreads; i++){
        threads.emplace_back(work);
    }

    threads.emplace_back(slowWork);

    // wait for threads
    for(auto &thread : threads) thread.join();


    std::cout<<"Completed "<<sink<<" iterations.";
}