#include <iostream>
#include <memory>
#include <thread>
#include <deque>
#include <vector>
#include <string>
//#include "runningInstructions.hpp"
//#include "clock.hpp"

using namespace std;

// create function to run instruction when it's time

struct Instruction{
    // stages of an instruction. If a instruction is currently running, it should be set to 1 while all others are set to 0
    // can determine what stage a instruction should be by taking clock cycle #?
    // instructions can run at the same time, but once time is up, you gotta go 

    // constructor for instruction class --> Creates a deque of instructionSequeunces and initialises with all stages
    
    deque<string> instructionSequences;
    // constructor which appends each step to a deque
    Instruction(){
        
         instructionSequences.push_back("instructionFetch");
         instructionSequences.push_back("instructionDecode");
         instructionSequences.push_back("instructionExecute");
         instructionSequences.push_back("instructionAccess");
         instructionSequences.push_back("instructionStore");
    }
     

    
    // add all 5 instructions to runInstructions buffer
    // benefit of including a thread???
    //  benefit is we can execute code inside the thread


    string getCurrentInstruction(deque<string> instructionSequences){
            return instructionSequences.front();
    }


        void moveToNextStage(deque<string> &instructionSequences, int clock){
        instructionSequences.pop_front();
        if(instructionSequences.size() != 0){
            cout<<"I'm moving on to the "<<instructionSequences.front()<<" stage at clock cycle "<<clock<<endl;
        }
    }

      

    };

  
  







