#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <queue>
#include "runningInstructions.hpp"

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

    // create a queue of instructions that are currently running
    deque<Instruction> runningInstruction;
    int clockCycleLength = 18;

    for(int i = 0; i<clockCycleLength; i++){

        
    }



}