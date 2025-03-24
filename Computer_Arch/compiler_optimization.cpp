// no optimizations:
    // g++ compiler_optimization.cpp -o compiler_opt_0 -O0
    // time ./compiler_opt_0

// O1 optimizations:
    // g++ compiler_optimizations.cpp -o compiler_opt_1 -O1
    // time ./compiler_opt_1

// O2 optimizations:
    // g++ compiler_optimizations.cpp -o compiler_opt_2 -O2
    // time ./compiler_opt_2
// time actually stays around the same

// O3 optimizations:
    // g++ compiler_optimizations.cpp -o compiler_opt_3 -O3
    // time ./compiler_opt_3
    // time decreases pretty decently
    // size around the same as o2

//O3 + march native optimizations:
    // g++ compiler_optimizations.cpp -o compiler_opt_3_native -O3 -march=native
    // time ./compiler_opt_3_native
    // time decreases pretty decently
    // size around the same as o3
    
// ls -la compiler_opt_* shows our executable size shrinks decently well


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