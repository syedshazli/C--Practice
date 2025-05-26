#include <iostream>
#include <set>
#include <iterator>
int main(){
    // in sets, the value IS the key.. so no keys can be the same and no vals can be the same
    // ONLY UNIQUE VALUES
    // cant be modified once accessed
    // NOT TO BE CONFUSED WITH A HASHMAP!!! NO <INT, INT> KIND OF RELATIONSHIP
    std::set<int> mySet;
    mySet.emplace(10);

    for(auto val : mySet){
        std::cout<<val<<'\n';
    }

    std::set<float> initialiseSet = {20.0, 10.5, 132.7};
    // does NOT print in order! Because it maintians elements in ascending order by default
    for(auto &val : initialiseSet){
        // val = 10.3; THIS WONT WORK BECAUSE IT's READ ONLY
        std::cout<<&val<<' ';
        std::cout<<val<<'\n';
    }


   

}