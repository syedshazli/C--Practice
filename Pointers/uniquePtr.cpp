// using std
#include <iostream>
#include <memory>
using namespace std;

// no safety when freeing memory w/raw ptrs
// unique pointer is a smart ptr
// no need to manually delete
int main(){
    
    // dynamically allocate array
    unique_ptr<int[]> myPtr(new int[20]);

    // same thing as below
    // int *myArr = new int[5];
    // unique_ptr<int[]> arrPtr(myArr); 

 
    for(int i = 0; i< 20; i++){
        myPtr[i] = i*i;
    }
    cout<<"Without makeUnique: "<< myPtr[3]<<endl;
    cout<<"Without makeUnique: "<<myPtr[18]<<endl;

    // using std:: make_unique
    // no need to use new
    auto autoPtr = make_unique<int[]>(20); // unique ptr dynamocially allocating space for 10 ints
    for(int j = 19; j>=0; j-=1){
        autoPtr[j] = j*j;
    }


    cout<<"With makeUnique: "<<myPtr[3]<<endl;
    cout<<"With makeUnique: "<<myPtr[18]<<endl;

}