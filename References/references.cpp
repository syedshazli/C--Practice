#include <iostream>
#include <cassert>
using namespace std;
int main(){
    // B does not reference A,
    // requires new piece of memory for B
    // int a = 5;
    // int b = a;
    // b+=1;

    // cout<<a<<endl;
    // cout<<b<<endl;
    // cout<<&a<<endl;
    //cout<<&b<<endl;
    // return 0;

    // using & we don't need new memory for B
    int a = 9;
    int &b = a;
    b +=1; // increments A
    cout<<a<<endl;
    cout<<b<<endl;
   
     //assert(b!=a); // should return false since they are the same
    //print address

    cout<<&a<<endl;
    cout<<&b<<endl;

}