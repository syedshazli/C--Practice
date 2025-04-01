#include <iostream>
#include <memory>
#include <thread>
#include "runningInstructions.hpp"

using namespace std;

struct Instruction{
    // stages of an instruction. If a instruction is currently running, it should be set to 1 while all others are set to 0
    // can determine what stage a instruction should be by taking clock cycle #?
    int instructionFetch;
    int instructionDecode;
    int instructionExecute;
    int instructionAccess;
    int instructionStore;
};

void startRunning(thread myThread){

}