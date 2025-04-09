#include <iostream>
#include <memory>
#include <thread>
#include <deque>
#include <vector>
#include <string>
#include "runningInstructions.hpp"
#include "clock.hpp"

using namespace std;

// create function to run instruction when it's time

struct Instruction{
    // stages of an instruction. If a instruction is currently running, it should be set to 1 while all others are set to 0
    // can determine what stage a instruction should be by taking clock cycle #?
    // instructions can run at the same time, but once time is up, you gotta go 
    // thread instructionFetch;
    // thread instructionDecode;
    // thread instructionExecute;
    // thread instructionAccess;
    // thread instructionStore;
    deque<string> instructionSequences;
    deque<thread> runInstructions;
    float startTime;
    float endTime;
    
    // add all 5 instructions to runInstructions buffer
    // benefit of including a thread???
    //  benefit is we can execute code inside the thread


    // void addInstructions(deque<thread> runInstructions){
    // runInstructions.push_back(instructionFetch);
    // runInstructions.push_back(instructionDecode);
    // runInstructions.push_back(instructionExecute);
    // runInstructions.push_back(instructionAccess);
    // runInstructions.push_back(instructionStore);
    // }
    void addInstructionsString(deque<string> instructionSequences){
    instructionSequences.push_back("instructionFetch");
    instructionSequences.push_back("instructionDecode");
    instructionSequences.push_back("instructionExecute");
    instructionSequences.push_back("instructionAccess");
    instructionSequences.push_back("instructionStore");
    }
    // iterate through the array, where each instruction runs based on a for loop
    void executeStages( int instructionNumber, deque<string>listOfStages){
       

        while(listOfStages.size() != 0){
            // HOW DO WE DO THE ACTUAL PIPELINING PART... WAITING FOR THE FIRST INSTRUCTION TO FINISH A STAGE BEFORE EXECUTING
            waitOneClockCycle();
            // func. for looping, show the instruction number and what's currently executing
            cout<<"Running instruction "<<instructionNumber<<" in which the current stage is "<<listOfStages[0];
            listOfStages.pop_front(); // finished executing the current stage
        }

    }

};

void startRunning(thread myInstruction, int i){
    Instruction I1;
   // I1.addInstructions(I1.runInstructions); // input--> Vector that is to be filled with threads
    // each instruction now has a vector of execution stages ready to run
    I1.addInstructionsString(I1.instructionSequences);
    I1.executeStages( i, I1.instructionSequences);
    
}

