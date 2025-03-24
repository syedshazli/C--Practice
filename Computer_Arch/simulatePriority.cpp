#include <iostream>
#include <map>
#include <deque>
#include <chrono>
#include <thread>

using namespace std;

void sleep(){
    this_thread::sleep_for (chrono::seconds(2)); 
}

void runSimulation(deque<int> processQueue, int waitingProcess, map<int,int> priorityMap, int currentProcess){
    // this is how we loop through hashmaps in C++ 17
    for (auto const& [key, val] : priorityMap){
        if(key == 1000){continue;}

        processQueue.push_back(key);
        cout<<"I'm about to run Process "<<currentProcess << " with a priority of "<<priorityMap[currentProcess]<<endl;;
       // this_thread::sleep_for (chrono::seconds(2)); 
        sleep();
        /**  each iteration, add a PID to the queue waiting to be ran
          if the front of the queue has a higher priority than what is currently running, 
              1. store waiting process in an integer
              2. Remove waiting process from top of the queue
              3. store current process in an integer
              4. push current process to top of the queue
              5. run the process with the higher priority (wait for 1000 seconds?)
        */

        // before stopping a process from running, make sure to check if a higher process priority is in the front of queue
        
        // 1000 in queue, 1000 currently running
        if(   priorityMap[processQueue.front()] >= priorityMap[currentProcess] ){
            cout<<"I need to replace PID "<<currentProcess<<" with a priority of "<<priorityMap[currentProcess]<<endl;
           
            waitingProcess = processQueue.front(); // store the process before popping
            cout<<"Instead, I'm going to run PID "<<waitingProcess<<" with a priority of "<<priorityMap[waitingProcess]<<endl;

            processQueue.pop_front(); // now pop that process because we want to run it
           // processQueue.push_front(currentProcess); // send the process that was running to the front

            currentProcess = waitingProcess; // let people know the process running now is the one with a higher priority
        }

        // otherwise, we're done running the current process. REPLACE
        else{
            cout<<"I just finished running process "<<currentProcess<<" with a PID of "<<priorityMap[currentProcess]<<endl;
            currentProcess = processQueue.front();
            processQueue.pop_front();
            cout<<"Now, I'm going to run PID "<<currentProcess<<" with a PID of "<<priorityMap[currentProcess]<<endl;
            
        }

    }

}
    
int main(){
    cout<<"Welcome to a demo of process priority."<<endl;
    map<int,int> priorityMap;
    // key is the PID, value is the process priority
    // process priority ranges from 0-7, 7 being highest priority
    priorityMap[1000] = 0;
    priorityMap[1001] = 4;
    priorityMap[1002] = 2;
    priorityMap[1003] = 3;
    priorityMap[1004] = 6;
    priorityMap[1005] = 7;
    priorityMap[1006] = 5;
    priorityMap[1007] = 1;

    
    // should have a loop that goes through the values in the hashmap, running based on higher or lower priority
    // create a queue of waiting pids?
    deque <int> processQueue;
    int waitingProcess;

    int currentProcess = 1000; // pid of current process (set to beginning of hashmap)

    runSimulation(processQueue, waitingProcess, priorityMap, currentProcess); // call function to use loop
    cout<<"Finished simulation!"<<endl;

}

    