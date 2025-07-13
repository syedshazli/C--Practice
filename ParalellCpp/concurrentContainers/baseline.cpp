#include <mutex>
#include <queue>
#include <random>
#include <thread>
#include <vector>

int main(){
    // num elements added to qeueu
    const int numElements = 1 << 25;
    // divide work to threads
    const int numThreads = 8;
    const int elementsPerThread = numElements/numThreads;

    // create queue
    std::queue<int> queue;

    // mutex to guard the queue
    std::mutex myMutex;

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution dist(1,100);

    auto work = [&](){
        for(int i = 0; i < elementsPerThread; i++){
            // get a random number
            auto val = dist(mt);
            // get the lock 
            std::lock_guard<std::mutex> lg(myMutex);
            // push val to queue
            queue.push(val);
        }
    };

    // spawn threads
    std::vector<std::jthread> threads;
    for(int i = 0; i <numThreads; i++){
        threads.emplace_back(work);
    }
}