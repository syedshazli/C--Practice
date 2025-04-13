#include <thread>
#include <iostream>
#include <vector>
using namespace std;

void doSomethingThready(int tid){
    cout<<"I'm thread #"<<tid<<endl;
}

int main(){

    // spawn threads of execution to get paralellism
    // multiple functions to execute concurrently
    // so tell one thread to execute a function, and while that happens, continue with main thread execution
    
    thread myThread1(doSomethingThready, 0);
    myThread1.join();
    
    // make 6 threads
    vector<thread> arrThreads(6);

    for(int i = 1; i<6; i++){
        arrThreads[i] = thread(doSomethingThready, i);
    }

    
}