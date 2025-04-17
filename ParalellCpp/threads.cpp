#include <thread>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void doSomethingThready(int tid ){
    cout<<"I'm thread #"<<tid<<endl;
}

int main(){

    // spawn threads of execution to get paralellism
    // multiple functions to execute concurrently
    // so tell one thread to execute a function, and while that happens, continue with main thread execution
    
    thread myThread1(doSomethingThready, 0);

    // my main thread running the main function will wait here till myThread1 is done
    //myThread1.join();
    
    // make 6 threads, and have them execute a function
    vector<thread> arrThreads(6);

    for(int i = 1; i<6; i++){
        arrThreads[i] = thread(doSomethingThready, i);
    }

    for(int i = 1; i<6; i++){
        arrThreads[i].join();
    }
    
    // C++ 20: Jthread
    // automatically joins upon destruction

}