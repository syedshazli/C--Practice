#include <thread>
#include <iostream>
#include <vector>
#include <thread>
#include <deque>
#include <queue>
#include "runningInstructions.cpp"
//#include "clock.hpp"
using namespace std;


/**
     * Pipelining: The idea:
     *                      1. Instruction execution is broken down into multiple sequential stages
     *                      2. Multiple instructions processed simultanrously (each isntruction @ a different stage of pipeline)
     *                      3. No need to wait for one instruction to complete all stages before starting the next one
     *                      4. New instruction can begin at the same time
     * 
     * 
     * Stages of an instruction: 
     *  1. Instruction Fetch
     *  2. Instruction Decode
     *  3. Execute
     *  4. Memory Access 
     *  5. Write Back (Store Result)
     *         
     * 
     * So now what's our plan to simulate this? 
     * Currently won't deal with issue of pipeline hazards/dependencies
     * Create instruction objects, using all 6 instruction stages????   
     * A thread will allow us to simulate the different instructions       
     * Just because things are running at the same time doesn't mean it needs to be a thread
     * 
     * 
     * The clock is the synchronization method
     * After one clock cycle, we:
     *  1. Add a new instruction to a 'running array'
     *  2. Move each instruction in the 'running array to the next stage'
     *  3. If we've reached the last step of the instruction, pop from the 'running array'
    */

int main(){
    
   
    //startClock(); // clock will run, each cycle is 1 second
    // main functions as the CPU
    // in each startRunning, check if front of queue for instruction i-1 is != fetch

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
    for (int clock = 0; clock < clockCycleLength; clock++){

        // push whatever is on top of the queue
        Instruction currentInstruction = waiting.front();
        // instruction is no longer waiting
        if(waiting.size() != 0 ){
        Instruction currentInstruction = waiting.front();
        waiting.pop();
        }

        // instruction is now Running
        runningInstruction.emplace_back(currentInstruction);

        // for each instruction that is running, move the instruction to the next stage
        for(auto currentInstruction : runningInstruction){
            if(currentInstruction.instructionSequences.size() != 0){
                currentInstruction.moveToNextStage(currentInstruction.instructionSequences, clock);
            }
            else{
                // current instruction is done running, pop it from running
                runningInstruction.pop_front();
            }

        }

    }

}