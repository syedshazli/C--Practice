#include <iostream>
#include <fstream>

int main(){
    // create ifstream object
    std::ifstream input("result.txt");
    int data;

    // read input into data
    // format doesn't matter, if we used no new lines it would read each collection of bytes
    while(input >> data){
        std::cout<<data<<'\n';
    }
    return 0;
}