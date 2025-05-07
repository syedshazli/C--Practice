#include <thread>
#include <iostream>
#include <atomic>

using namespace std;

// use std atomic to manage contention of shared resources
// we're allowed to use mutex, but let's see what atomic does
// when using an atomic, instructions can't interleave, one must finish reading before someone else writes
// and another must finish writing before another reads

// need to use pass by ref
// we don't see counter being the expected value when reaching large iterations
// this is due to data races: multiple threads reading/writing at the same time
void work(atomic<int> &myCount){
    
    for(int i = 0; i<55500; i++){
        
        myCount+=1;
    }
}

int main(){
    // atomic int instead of a normal int, no more data races
    atomic<int> counter = 0;
    // reference argument needs to be passed, must be wrapped with ref
    thread t1(work, ref(counter));
    thread t2(work, ref(counter));
    t1.join();
    t2.join();

    cout<<"Counter is = "<<counter<<endl;
}