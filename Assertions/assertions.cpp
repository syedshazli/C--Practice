#include <cassert>
#include <iostream>

// assertions are used in debugging and testing by a programmer, rarely in prod code.
// goal of this file was to see what would happen when we assert inside a double for loop, Does it quit or continue?
int main()
{
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            std::cout<<"J in correct loop is = "<<j<<std::endl;
            assert(j<5); // will always be true, continues as usual
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            std::cout<<"J in incorrect loop is = "<<j<<std::endl;
            assert(j>0); // will always be false, and aborts the double loop!
        }
    }
}