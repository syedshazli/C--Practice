// signed integers
// lsb is at 2^0
// msb is 2^32-1, multiplied by -1
// program shows how 2's complemented is represented
#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main(){
    // set signed integer value (32 bits)
    int32_t value = -1;
    bitset<32> bits(value);

    // result to calculate
    int32_t result = 0;

    // iterate thru all 32 bits
    for(int i = 0; i<32; i++){
        if(bits[i]){
            // current bit is 1
            result += 1 <<i;
            // bit 31 is active, negative integer
            if(i == 31){
                cout<< "-2^"<<i<<" = "<<(1<<i)<<endl;
            }
            else{
                // bit 32 is low, positive integer
                cout<< "2^"<<i<<" = "<<(1<<i)<<endl;
            }
        }
    }
    cout<<"Final sum = "<<result<<" = 0b"<<bitset<32>(result)<<endl;

}