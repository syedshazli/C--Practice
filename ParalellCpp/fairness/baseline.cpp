#include <pthread.h>
#include <algorithm>
#include <array>
#include <chrono>
#include <iostream>
#include <thread>
#include <vector>

// this approach can cause thread starvation
// because it's a 'race' to grab the lock first, there's no priority given to anyone
int main(){

    const int numIterations = 1 << 22;
    const int numThreads = 8;

    std::array<int, 8> maxWaitTime;

    pthread_spinlock_t spinlock;
    pthread_spin_init(&spinlock, 0);

    auto work = [&](int tid){
        int max = 0;
        for(int i = 0; i<numIterations; i++){
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