#include <stdio.h>
#include <iostream>
#include <iterator>
using namespace std;
int main(int argc, char* argv[]){

    cout<<"Enter two integers"<<endl;

    istream_iterator <int> inputInt(cin); // read int values from cin
    int num1 = *inputInt; // read int
    ++inputInt; // move iterator to next input
    int num2 = *inputInt; // read new int

    ostream_iterator <int> outputInt (cout);

    cout<<"Your sum is ";
    *outputInt = num1+num2; // output result to cout, no need to say cout outputInt

    cout<<endl; //ended on page 857

}