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
  

    // using a shared pointer because when using unique pointer, we expectedley run into issues
    shared_ptr<myBooks> syedsPointer(new myBooks); // create pointer (dynamically allocates memory for a myBook object, creates a pointer that points to it)
    syedsPointer->numBooks = 5;
    syedsPointer->favBook = "Computer Architecture: A Quantitative Approach";
    syedsPointer->totalPriceOfBooks = 650.70;

    double syedsPrice = syedsPointer->totalPriceOfBooks; // example setting a variable to a value that a smart pointer is pointing to

    cout<<"Number of books for syedspointer: "<<syedsPointer->numBooks<<endl;
    cout<<"Syed's Pointer's favorite book: "<<syedsPointer->favBook<<endl;
    cout<<"Total Price of Syed's pointer books: "<<syedsPrice<<endl;
    
}