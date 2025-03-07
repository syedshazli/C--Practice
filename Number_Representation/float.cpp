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
            if (i == 7){
                exponent -= 1<<i;
            }
            else{
                exponent += 1 <<i;
            }
        }
    }

}