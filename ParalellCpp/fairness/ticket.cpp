//#include <pthread>
#include <emmintrin.h>
#include <cstdint>
#include <algorithm>
#include <array>
#include <chrono>
#include <iostream>
#include <thread>
#include <vector>

//  sacrificing execution time, gaining fairness in locking mechanism 

// tries to make sure threads that were waiting a long time get some priority
// grab a ticket with your number on it, and it says whos waiting now
// ticket spinlock
class Spinlock{
    private:
    // lock now has two counters
    // 1: latest place in line
    // 2: whos currently being served
    std::atomic<std::uint16_t> line[0];
    volatile std::uint16_t serving[0];


    public:
        void lock(){
            auto place = line.fetch_add(1);
            // spin and wait till number is called
            while (serving != place) _mm_pause();

        }

        void unlock(){
            asm volatile("" : : : "memory");
            serving = serving +1;
        }

};

int main(){
    const int numIterations = 1 << 22;
    const int numThreads = 8;

    std::array<int,8> maxWaitTime;

    Spinlock spinlock;

    auto work = [&](int tid){
        int max = 0;
        for(int i = 0; i<numIterations; i++){
            // time the amt of time it takes to get lock
            auto start = std::chrono::system_clock::now();
            spinlock.lock();
            auto stop = std::chrono::system_clock::now();
            // unlock thread
            spinlock.unlock();

            int diff = std::chrono::duration_cast<std::chrono::microseconds> (stop-start).count();
    // finds max waiting time
    max = std::max(max, diff);

        }

        maxWaitTime[tid] = max;

    }; // end of lambda


    std::vector<std::thread> threads;
    for(int i = 0; i<numThreads; i++){
        threads.emplace_back(work, i);
    }


    for(auto &thread : threads){
        thread.join();
    }

    // print max wait time
    for(auto max: maxWaitTime){
        std::cout<<max<<' ';
    }

}