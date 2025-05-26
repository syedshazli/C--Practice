#include <iostream>
#include <set>
#include <iterator>
int main(){
    // in sets, the value IS the key.. so no keys can be the same and no vals can be the same
    // ONLY UNIQUE VALUES
    // cant be modified once accessed

    std::set<int> mySet;
    mySet.emplace(10);

    for(auto val : mySet){
        std::cout<<val;
    }
}