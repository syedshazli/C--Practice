#include <iostream>
#include <numeric>
#include <vector>
#include <execution>
using namespace std;

// we care about performance!!
// let's find the basics of gaining performance via paralellism

// sum up contetns of vector (or do saxpy??)
int main(){
    
    // // 2^30  integers
    // vector<int> myVec (1<<30);
    // // sum up contents of vector, initialise all contents of vector with 0
    // // find performance with 'time ./pa'
    // // everything runs in one thread
    // auto result = reduce(myVec.begin(), myVec.end(), 0);

    // // we have different policies which says what we're allowed to do
    // // ex: multiple threads running allowed? Different elements @ same time in the same thread allowed?
    // //      vector instructions allowed??
    // return result;

    vector<int>myVec (1<<30);
    // require linking against TBB (must apt install, and include in compile)
    auto result = reduce(execution::par_unseq, myVec.begin(), myVec.end(), 0);
    
}