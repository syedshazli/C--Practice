// we wanna use data structures inside paralell programs!
// but stl containers aren't well suited for this

// but we can still protect em using dedicated concurrent containers

#include <random>
#include <thread>
#include <vector>
#include <tbb/concurrent_queue.h>

int main(){
    
    const int numElements = 1 << 25;
    // divide work to threads
    const int numThreads = 8;
    const int elementsPerThread = numElements/numThreads;

    // create queue
    concurrent_queue<int> queue;

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution dist(1,100);

    auto work = [&](){
        for(int i = 0; i<elementsPerThread; i++){
            // no need for lock guard
            // multiple threads can call push at the same time
            queue.push(dist(mt));
        }
    };

    std::vector<std::jthread> threads;
    for(int i = 0; i <numThreads; i++){
        threads.emplace_back(work);
    }
}