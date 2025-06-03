#include <string>
#include <iostream>
class hwInfo{

    hwInfo(){
        std::cout<<"Im the hardware. You can ping me any time, and I'll give you an exception if I have one. \n";
    }
    std::string exceptionInstruction; // different exceptions are encoded with different values
    public:
        void setException(std::string exceptionMessage){
            exceptionInstruction = exceptionMessage;
        }

};

void updateHardware(hwInfo &myHW){

    myHW.setException("Illegal memory access");

}

void pingHardware(int numIterations, hwInfo &myHW){

    for(int i = 0; i< numIterations; i++){
        if(i == 2){
            // simulate the hardware sending back an exception
            updateHardware(myHW);
        }
    }
}