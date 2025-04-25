#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <queue>
#include "runningInstructions.hpp"

using namespace std;
/**
 * benchmarking pipelining:
 * 1. All 6 instructions still in waiting queeu
 * 2. First instruction popped
 * 3. For each clock cycle, pop a stage off instruction deque
 * 4. Once we get the signal that instruction deque is empty, set next waiting instruction to running 
 * */ 
int main(){
// these instructions are waiting to be run
    queue <Instruction> waiting;

    Instruction i1;
    Instruction i2;
    Instruction i3;
    Instruction i4;
    Instruction i5;
    waiting.push(i1);
    waiting.push(i2);
    waiting.push(i3);
    waiting.push(i4);
    waiting.push(i5);
    int length = waiting.size();

    // create a queue of instructions that are currently running
    deque<Instruction> runningInstruction;
    int clockCycleLength = 30;
    // no instructions are done yet
    int instructionBarrier = 0;
    // start the clock
    for(int clock = 0; clock <clockCycleLength; clock++){

        // without pipelining, we don't run instructions at the same time
        // hence, only 1 instruction can be running at a time
        if(runningInstruction.size() == 0){
            
            runningInstruction.emplace_back(waiting.front());
            waiting.pop();
        }

        // for the only instruction that's running, move it to the next stage every clock cycle
        for(Instruction &currentInstruction : runningInstruction){
            moveToNextStage(currentInstruction.instructionSequences, clock);
            instructionBarrier+=1;
        }

        if(instructionBarrier == length){
            // current instruction is done running
            runningInstruction.pop_front();

            cout<<"I finished running all my instructions at clock cycle "<<clock<<endl;
            // reset instruction barrier
            instructionBarrier = 0;

        }

    }



}