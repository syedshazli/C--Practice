#include <iostream>
#include <memory>
#include <string>

using namespace std;

struct myBooks{
    int numBooks;
    string favBook;
    double totalPriceOfBooks;
};

int main(){
    myBooks syedsBooks; // create object

    // using a shared pointer because when using unique pointer, we expectedley run into issues
    shared_ptr<myBooks> syedsPointer(new myBooks); 
    syedsPointer->numBooks = 5;
    cout<<"number of books for pointer: "<<syedsPointer->numBooks<<endl;
    
}