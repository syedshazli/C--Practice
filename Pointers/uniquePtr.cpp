// using std
#include <iostream>
#include <memory>
using namespace std;

// no safety when freeing memory w/raw ptrs
// unique pointer is a smart ptr
// no need to manually delete
// unique owenrship over some object
// memory automatically freed
int main(){
    
    // dynamically allocate array
    unique_ptr<int[]> myPtr(new int[20]);

    // same thing as below
    // int *myArr = new int[20];
    // unique_ptr<int[]> arrPtr(myArr); 
    // so this makes the pointer arrPtr set to 

 
    for(int i = 0; i< 20; i++){
        myPtr[i] = i*i;
    }
    cout<<"Without makeUnique: "<< myPtr[3]<<endl;
    cout<<"Without makeUnique: "<<myPtr[18]<<endl;

    // using std:: make_unique
    // no need to use new
    auto autoPtr = make_unique<int[]>(20); // unique ptr dynamocially allocating space for 20 ints
    for(int j = 19; j>=0; j-=1){
        autoPtr[j] = j*j;
    }


    cout<<"With makeUnique: "<<autoPtr[3]<<endl;
    cout<<"With makeUnique: "<<autoPtr[18]<<endl;

}