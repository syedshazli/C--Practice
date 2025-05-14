#include <list>
#include <mutex>
#include <random>
#include <thread>
#include <algorithm>
#include <chrono>

int main(){
    //gen random nums
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution dist(10,20);

    // list of random nums
    std::list<int> myList;
    std::generate_n(std::back_inserter(myList), 1<<20, [&](){return dist(mt); });

    // lock guarding access to list
    std::mutex lock;

    // removing items from list in paralell

    auto work = [&](){
        // run till list is empty
        while(true){
            // get lock
            std::lock_guard<std::mutex> lg(lock);

            if(myList.empty()){break;}
            myList.pop_back();

        }
    };

    int numThreads = 8;
    std::vector<std::jthread> threads;
    for(int i = 0; i<numThreads; i++){
        threads.emplace_back(work);
    }

}