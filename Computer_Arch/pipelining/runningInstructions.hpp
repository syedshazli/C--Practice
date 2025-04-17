#include <iostream>
#include <memory>
#include <thread>
#include <deque>
#include <vector>
#include <string>
#include "clock.hpp"
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
   
    void moveToNextStage(deque<string> instructionSequences);
    void addInstructionsString(deque<string> instructionSequences);
};

