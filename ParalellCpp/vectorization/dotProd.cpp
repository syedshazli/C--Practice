// using vector/simd instructions
// doing 4 adds in one instruction 
// can offload to compiler or add manually

#include <algorithm>
#include <execution>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

static void dpBench(){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution dist(1,10);

    // create vectors of random nums
    const int numElements = 1<<15;
    std::vector<int> v1;
    std::vector<int> v2;
    std::ranges::generate_n(std::back_inserter(v1), numElements, [&]{return dist(mt);});
    std::ranges::generate_n(std::back_inserter(v2), numElements, [&]{return dist(mt);});

    // do dot prod
    int *sink = new int;
    for(auto _ : s)
}
