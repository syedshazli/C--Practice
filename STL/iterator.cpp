#include <stdio.h>
#include <iostream>
#include <iterator>
#include <array>
using namespace std;
int main(int argc, char* argv[]){

    array<int, 5> myArr = {1, 2, 3, 4, 5};
    for(auto iter = myArr.begin(); iter < myArr.end(); iter+=1){
        // access a value in an iterator, which is an abstraction?
        // use *iter to access value under iter
        cout<<*iter<<' ';
    }
    cout<<endl;

    //iterate an array in reverse, we just need to change begin and end for body
    // instead of changing and flipping around the whole structure like normally
    // ex: for(int i = size-1, i>= 0; i-=1) vs for(int i = 0, i< size, i++)
    // 2 very different statements syntactically
    // where here, we only change up end and beginning ptrs
    for(auto iter = myArr.rbegin(); iter < myArr.rend(); iter+=1){
        cout<<*iter<<" ";
    }
    cout<<endl;

// Allows us to use offsets to iterate at specific starting/endpoints
for(auto iter = myArr.rbegin()+1; iter < myArr.rend(); iter+=1){
        cout<<*iter<<" ";
    }

    return 0;

}