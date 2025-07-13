#include "hardwareRep.hpp"
#include <iostream>
#include <map>
namespace tryException{
    pingHardware(numIterations, myHW);
}
// receive information from the hardware when a TRAP opcode comes in
// hardware sort of gives you the mapping when it's encoded (0x01 == memory address problem)
int main(){


    // Kernel pings/polls the HW to see if any trap opcode comes
    // if it comes, receive the info from the HW, and encode in struct 
    // output the exception on the debugger

    std::cout<<"Hello, I'm the debugger here to assist you. While you step thru, I'm going to check if your code generates any exceptions"<<'\n';
    int numIterations = 3;
    hwInfo myHW;
    tryException::pingHardware((numIterations, myHW));


}