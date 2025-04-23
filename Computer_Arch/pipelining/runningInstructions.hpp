#ifndef RUNNING_INSTRUCTIONS_HPP
#define RUNNING_INSTRUCTIONS_HPP
#include <iostream>
#include <deque>
#include <vector>
#include <string>

using namespace std;

struct Instruction{
deque<string> instructionSequences;
    // define constructor in .hpp file
    Instruction(){
        
         instructionSequences.push_back("instructionFetch");
         instructionSequences.push_back("instructionDecode");
         instructionSequences.push_back("instructionExecute");
         instructionSequences.push_back("instructionAccess");
        instructionSequences.push_back("instructionStore");
    };
   
    
    void getCurrentInstruction(deque<string> instructionSequences);
};

void moveToNextStage(deque<string> &instructionSequences, int clock);

#endif
