#include <thread>
#include <iostream>
#include <vector>
#include <thread>
#include "runningInstructions.hpp"
#include "clock.hpp"
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
     * After one clock cycle, we move on to a new instruction
     * 
    */

int main(){
    
    thread instruction1;
    thread instruction2;
    thread instruction3;
    instruction1.detach();
    instruction2.detach();
    instruction3.detach();
    //startClock(); // clock will run, each cycle is 1 second
    // main functions as the CPU
    // in each startRunning, check if front of queue for instruction i-1 is != fetch

    // createThreeInstructions
    // execute first instruction
    // once first instruction is past fetch, execute next instruction
    // each instruction finishes a stage every clock cycle
    // the CPU (main function) has to control when other functions start running
    startRunning(instruction1, 1); 
    startRunning(instruction2, 2);
    startRunning(instruction3, 3);

}