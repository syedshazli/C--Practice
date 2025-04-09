#include <iostream>
#include <memory>
#include <thread>
#include <terminate>
#include "runningInstructions.hpp"

using namespace std;

struct Instruction{
    // stages of an instruction. If a instruction is currently running, it should be set to 1 while all others are set to 0
    // can determine what stage a instruction should be by taking clock cycle #?
    // instructions can run at the same time, but once time is up, you gotta go 
    thread instructionFetch;
    thread instructionDecode;
    thread instructionExecute;
    thread instructionAccess;
    thread instructionStore;
    float startTime;
    float endTime;
};

void startRunning(thread myThread){

}