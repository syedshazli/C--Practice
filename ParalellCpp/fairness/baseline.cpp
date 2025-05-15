#include <pthread.h>
#include <algorithm>
#include <array>
#include <chrono>
#include <iostream>
#include <thread>
#include <vector>


int main(){

    const int numIterations = 1 << 22;
    const int numThreads = 8;

    std::array<int, 8> maxWaitTime;

    pthread_spinlock_t spinlock;
    pthread_spin_init(&spinlock, 0);

    auto work = [&](int tid){
        int max = 0;
        for(int i = 0; i<numIterationsl i++){
            // time the amt of time it takes to get lock
            auto start = std::chrono::system_clock::now();
            pthread_spin_lock(&spinlock);
            auto stop = std::chrono::system_clock::now();
            // unlock thread
            pthread_spin_unlock(&spinlock);

            int diff = std::chrono::duration_cast<std::chrono::microseconds> (stop-start).count();
    // finds max waiting time
    max = std::max(max, diff);

        }

        max_wait_time[tid] = max;

    }; // end of lambda


    std::vector<std::thread> threads;
    for(int i = 0; i<numThreads; i++){
        threads.emplace_back(work, i);
    }


}