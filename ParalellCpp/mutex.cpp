#include <thread>
#include <iostream>
#include <mutex>
#include <vector>
using namespace std;

mutex myMutex;
mutex intAccess;

void printTID(int tid, int &intIncrement){
    // if a thread has locked the mutex alr, we wait till the other thread is done
    // note that we enter deadlock if we never unlock!

    // RAII --> Get some resource in a constructor, release in the destructor
    // lock in constructor, unlock in destructor
    // done using lock_guard

    // if using lock guard, we don't need lock or unlock methods
    lock_guard<mutex> lg(intAccess);
    // intIncrement+=1;
    // cout<<intIncrement<<endl;
    myMutex.lock();    
    cout<<"I'm thread #"<<tid+1<<endl;
    myMutex.unlock();
}



int main(){
    // concurrent access of shared resource
    // for us it was trying to cout at the same time

    // mutex prevents shared data from being simulatenously accessed (OS)
    
    vector<thread> arrayThreads(6);
    int incrementInt = 0;
    for(int i = 0; i<arrayThreads.size(); i++){
        // orderings of prints may differ, which is ok
        arrayThreads[i] = thread(printTID, i, incrementInt); 
    }

    for(int i = 0; i<arrayThreads.size(); i++){
        arrayThreads[i].join(); 
    }

}