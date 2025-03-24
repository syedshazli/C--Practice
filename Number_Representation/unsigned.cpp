#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main(){
    uint32_t value = 171; // unsigned 32 bit int val
    bitset<32> bits(value); // allows us to access each bit of the unsigned int

    uint32_t result = 0; // result to calculate

    // iterate all bits
    for(int i = 0; i<32; i++){
        // if bit is set, add value
        if (bits[i]){
            result+=1<<i;
            cout<<"2^"<<i<<" = "<<(1<<i)<<'\n';
        }
    }

    cout<<"Final sum = "<<result<<" = 0b"<< bitset<32>(result)<<endl;

}