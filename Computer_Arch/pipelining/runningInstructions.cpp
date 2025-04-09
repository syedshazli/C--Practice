#include <iostream>
#include <memory>
#include <thread>
#include <deque>
#include <vector>
#include <string>
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
    vector<string> instructionSequences;
    deque<thread> runInstructions;
    float startTime;
    float endTime;
    
    // add all 5 instructions to runInstructions buffer
    // benefit of including a thread???
    void addInstructions(deque<thread> runInstructions){
    runInstructions.push_back(instructionFetch);
    runInstructions.push_back(instructionDecode);
    runInstructions.push_back(instructionExecute);
    runInstructions.push_back(instructionAccess);
    runInstructions.push_back(instructionStore);
    }
    void addInstructionsString(vector<string> instructionSequences){
    instructionSequences.push_back("instructionFetch");
    instructionSequences.push_back("instructionDecode");
    instructionSequences.push_back("instructionExecute");
    instructionSequences.push_back("instructionAccess");
    instructionSequences.push_back("instructionStore");
    }
    // iterate through the array, where each instruction runs based on a for loop
    void executeStages(deque<thread> runInstructions, int instructionNumber, vector<string>listOfStages){
        while(runInstructions.size() != 0){
            // func. for looping, pop the top of the vector
            cout<<"Running "<<" of ";
        //    cout<<"Just finished " runInstructions.pop_front();
        }

    }

};

void startRunning(thread myInstruction, int i){
    Instruction I1;
    I1.addInstructions(I1.runInstructions); // input--> Vector that is to be filled with threads
    // each instruction now has a vector of execution stages ready to run
    I1.addInstructionsString(I1.instructionSequences);
    I1.executeStages(I1.runInstructions, i, I1.instructionSequences);
    
}

