// when waiting for a lock to be free, we wait activley for the thread to be free
// spinning in the loop checking the state of the lock
// could be better than just sleeping if it's a short amt of time
#include <list>
#include <mutex>
#include <random>
#include <thread>
#include <algorithm>
#include <chrono>
#include <pthread.h>

int main(){
    //gen random nums
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution dist(10,20);

    // list of random nums
    std::list<int> myList;
    std::generate_n(std::back_inserter(myList), 1<<20, [&](){return dist(mt); });

    // lock, not mutex now
    pthread_spinlock_t spinlock;
    pthread_spin_init(&spinlock, 0);

    auto work = [&](){
        // run till list is empty
        while(true){
            // get lock
            pthread_spin_lock(&spinlock);

            if(myList.empty()){
                pthread_spin_unlock(&spinlock);
                break;
                }
            myList.pop_back();
            pthread_spin_unlock(&spinlock);
        }
    };

    int numThreads = 8;
    std::vector<std::jthread> threads;
    for(int i = 0; i<numThreads; i++){
        threads.emplace_back(work);
    }

}