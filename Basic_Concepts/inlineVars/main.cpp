#include <iostream>
#include "function.h"
#include "global.h"

int main(){
    // redefintion errors can occur at link time as well
    // still obey 1 definition rule, no two defs of src files in scope
    // but we can have global val in main and function, and link together
    // makes it a unique global symbol
    globalVal += 10;
    updateValue(10);
    std::cout<<globalVal<<'\n';    
    
    return 0;
}