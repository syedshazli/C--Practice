#include <iostream>
#include <array>
#include <algorithm>
// clang-format main.cpp to see this in proepr format
int main(){
    std::array<int, 5>
    myArr = {
        1, 2, 
        7, 0, 
        10};

    std::sort(myArr.begin(), myArr.end());


    for(auto value : myArr){
        std::cout<<value<<'\n';
    }

}