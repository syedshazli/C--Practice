#include <iostream>
#include <bitset>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <iostream>

using namespace std;

int main(){
    float myVal = -0.625F;

    uint32_t memcpy_val = 0;
    //use memcpy system call
    memcpy(&memcpy_val,&myVal, sizeof(float));
    bitset<32> bits(memcpy_val);

    //get sign bit
    // sign = -1 if bits[31] is 1 and 1 otherwise (bits[31] is 0)
    float sign = bits[31] ? -1.0f: 1.0f; 
    cout<<"Sign = "<<sign<<endl;

    int32_t exponent = 0;
    //calculate exponent
    for(int i = 0; i<8; i++){
        if(bits[i+23]){
            if (i == 7){ // 8 bit 2s complement signed number
                exponent -= 1<<i;
            }
            else{
                exponent += 1 <<i;
            }
        }
    }

    // remove bias, calculate value
    // 32b floating point is bias by 127 to make large numbers look large
    exponent -= 127;
    float expResult = pow(2, exponent);
    cout<<"Exponent result = "<<expResult<<endl;

    // calculate mantissa
    float mantissa = 1.0f;
    for(int i  = 0; i<23; i++){
        if (bits[22-i]){
            mantissa += pow(2, -i-1);
        }
    }

    cout<<"Mantissa = "<<mantissa<<endl;

    // calculate result
    float result = sign * expResult * mantissa;

    // print final result
    uint32_t memcpy_res = 0;
    memcpy(&memcpy_res, &result, sizeof(float));
    bitset<32> resBits(memcpy_res);

    cout<<"Final result = "<<result<<" = 0b"<<resBits<<endl;

}