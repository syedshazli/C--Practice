#include <iostream>
#include <span>
#include <vector>

using namespace std;

// beneift, sometimes we want container level abstraction
// dont have to keep track of starting and endpoints in functions


// instead of passing the whole vector or interators, send a span of ints
// must have c++ 20 to use span
//g++ span.cpp -o span --std=c++20
void printSubvector(span<int> span) {
        for(auto val:span){
            cout<<val<<' ';
        }
    cout<<endl;
}


int main(){
    vector<int> myVec = {1,2,3,4,5};
    printSubvector(myVec);

    // prints first 2 ints
    printSubvector(span(myVec.begin(), 2));

    printSubvector(span(myVec.begin()+2, 3));

    return 0;
}