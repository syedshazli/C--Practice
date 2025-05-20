// if we cancelled a thread in a program, it wouldnt block threads of other app
// huge performance increase compared to blocking.cpp!
/**
 * threads are just moving cacheline around 
 * in blocking, a thread blocks all other threads from doing anything
 * in nonblocking, we're not blocked by slow thread, we continue doing work as normal
 */
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

    // share val to increment (now atomic int)
    std::atomic <int> sink = 0;

 

    auto work = [&]() {
        while(true){
            // read current val
            int desired;
            int expected = sink.load();

            do{
                if(expected == numIterations) return;
                desired = expected + 1;

            }
            // atomically compares val of sink with expected
            // if equal, we replace sink with val of desired
            // else current val of sink is loaded into expected
            while(!sink.compare_exchange_strong(expected, desired));
         
        }
    };

    // run for 1 thread

    auto slowWork = [&](){
        while(true){
            // read current val
            int desired;
            int expected = sink.load();
            do{
                // update val
                if(expected == numIterations) return;
                desired = expected + 1;
            }
            // try exchange weak
            while(!sink.compare_exchange_weak(expected, desired));
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    };



    std::vector<std::jthread> threads;
    for(int i = 0; i< numThreads; i++){
        threads.emplace_back(work);
    }

    threads.emplace_back(slowWork);

    // wait for threads
    for(auto &thread : threads) thread.join();

    // expected 2 << 15
    std::cout<<"Completed "<<sink<<" iterations.";
}