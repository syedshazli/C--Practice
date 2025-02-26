// algo libraries helpful so that we dont reinvent the wheel
#include <algorithm>
#include <array>
#include <iostream>
using namespace std;

// use auto here if C++ version is C++ -20
// allows us to use templates
void print(auto arr){
    for (auto c: arr){
        cout<<c<<' ';
    }
    cout<<endl;
}

int main(){
    array <int, 5> myArr = {5, 2, 7, 3, 4};
    print(myArr);

    // use iterators to sort
    sort(myArr.begin(), myArr.end());
    print(myArr);

    myArr[2] = 100;
    cout<<"Before sorted with ranges::sort"<<endl;
    print(myArr);


    // must put cpp 20 as param in compile step
    ranges::sort(myArr);
    cout<<"after sorting with ranges::sort"<<endl;
    print(myArr);
    return 0;
}