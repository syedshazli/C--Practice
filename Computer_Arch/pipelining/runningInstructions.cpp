#include <iostream>
#include <memory>
#include <thread>
#include <vector>
#include "runningInstructions.hpp"

using namespace std;

// create function to run instruction when it's time

struct Instruction{
    // stages of an instruction. If a instruction is currently running, it should be set to 1 while all others are set to 0
    // can determine what stage a instruction should be by taking clock cycle #?
    // instructions can run at the same time, but once time is up, you gotta go 
    thread instructionFetch;
    thread instructionDecode;
    thread instructionExecute;
    thread instructionAccess;
    thread instructionStore;
    vector<thread> runInstructions;
    float startTime;
    float endTime;

    void startCycle(vector<thread> runInstructions){
    runInstructions.push_back(instructionFetch);
    runInstructions.push_back(instructionDecode);
    runInstructions.push_back(instructionExecute);
    runInstructions.push_back(instructionAccess);
    runInstructions.push_back(instructionStore);
    }
};

void startRunning(thread myInstruction){
    Instruction I1;
    I1.startCycle(I1.runInstructions);
    
}

void runSequence(){

}