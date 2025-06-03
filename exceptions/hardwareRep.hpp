#ifndef HARDWARE_REP_H
#define HARDWARE_REP_H
#include <string>
#include <iostream>
class hwInfo{

    private:
        std::string exceptionInstruction; // different exceptions are encoded with different values
    public:
        hwInfo();

        void setException(std::string exceptionMessage);

        std::string getException(){
            return exceptionInstruction;
        }

};

void updateHardware(hwInfo &myHW);

void pingHardware(int numIterations, hwInfo &myHW);

#endif