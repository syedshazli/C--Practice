#include <iostream>
#include <fstream>

// ofstream: high level file stream output operationss
int main(){
    // store i*i in a file to then view, creates a result.txt
    std::ofstream output("result.txt");
    for(int i = 0; i < 10; i++){
        output << i*i<<'\n'; 
    }
    // now to reqd data, we use input file stream
}