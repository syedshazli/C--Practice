#include <chrono>
#include <thread>
#include <iostream>
using namespace std;
// simulate a clock cycle running and instructions being run based on the clock cycle

void waitOneClockCycle(){
    this_thread::sleep_for (chrono::seconds(1)); 
}

void startClock(){
    int i = 0;
    while (i<20){
        cout<<"START OF CLOCK CYCLE "<<i<<endl;
        // start running a clock to simulate running a clock cycle, freeze for like 5 seconds?
        this_thread::sleep_for (chrono::seconds(1)); 

        cout<<"END OF CLOCK CYCLE "<<i<<endl;
        i +=1;
    }
}