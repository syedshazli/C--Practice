#include <thread>
#include <iostream>
#include <atomic>

const int numThreads = 8;
std::atomic_int threadsWaiting = 0;

void barrier(std::thread myThread){
    ++threadsWaiting; // pre increment threads waiting
    while(true){
        if(threadsWaiting == numThreads){
            break;
        }
        else{continue;}
    }    

}

void doSomething(std::thread worker){

    

}

int main(){


}