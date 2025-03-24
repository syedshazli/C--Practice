#include <iostream>
#include <memory>
#include <string>

using namespace std;

#define watchNumBooks(x) cout << (#x) << " number of books is " << (x->numBooks) << endl
#define watchfavBook(x) cout << (#x) << " favorite book is " << (x->favBook) << endl
#define watchtotalPriceOfBooks(x) cout << (#x) << " total price of books is " << (x->totalPriceOfBooks) << endl


void smallUniquePtrFunction(shared_ptr<int[]> &sharedPtr){
    cout<<endl;
    cout<<"Hello from a pass by reference function! "<<endl;
    cout<<"Trying to find the first number in the array "<<endl;
    cout<<sharedPtr[0]<<endl;
    cout<<endl;
    cout<<"Now trying to access a value from a shared pointer that was retrieved from a shared pointer"<<endl;
    cout<<sharedPtr[1]<<endl;
    
}



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
    // can use watch___ here, but wanted to show what it meant to execute
    cout<<"Number of books for syedspointer: "<<syedsPointer->numBooks<<endl;
    cout<<"Syed's Pointer's favorite book: "<<syedsPointer->favBook<<endl;
    cout<<"Total Price of Syed's pointer books: "<<syedsPrice<<endl;
    
    // start sharing
    auto sharedSyedPointer = syedsPointer;
    auto thirdShareSyed = sharedSyedPointer;
    cout<<endl;
    cout<<"I just shared syedsPointer to 2 other smart pointers. Let's see if they can tell the truth"<<endl;

    // find out if pointers hold same value
    watchNumBooks(sharedSyedPointer);
    watchfavBook(sharedSyedPointer);
    watchtotalPriceOfBooks(sharedSyedPointer);

    cout<<endl;
    watchNumBooks(thirdShareSyed);
    watchfavBook(thirdShareSyed);
    watchtotalPriceOfBooks(thirdShareSyed);

    cout<<endl;
    // change value, see if it's reflected in all other pointers
    cout<<"I'll now change a variable using thirdShareSyed. Let's see if it's reflected in the other pointers"<<endl;
    thirdShareSyed->favBook = "Introduction to Computing Systems";
    watchfavBook(syedsPointer);
    watchfavBook(sharedSyedPointer);
    watchfavBook(thirdShareSyed);

    shared_ptr<int[]> newShare(new int[20]);
    auto myShare = newShare;
    myShare[0] = 0xF;
    myShare[1] = thirdShareSyed->numBooks;

    smallUniquePtrFunction(newShare); // pass by reference for smart pointers
    

    
}