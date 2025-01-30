// no optimizations:
    // g++ compiler_optimization.cpp -o compiler_opt_0 -o0
    // time ./compiler_opt_0

// O1 optimizations:

#include <vector>
using namespace std;
int main(){
    // create vecotr of 2^28 elements
    auto numElements = 1<<28l;
    vector<int> vector(numElements);

    // modulo each val by 20
    for(auto &value: vector){
        value %= 20;
    }
}