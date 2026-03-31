#include <iostream>

// different ways to initialize a std::vector, must be implemented here.
// example: can init with vector<int, 5>, with no predefined size, etc.
class Vector{

    // takes a templated array and adds values to the end of it
    // aka we must allocate memory for a new element, resizing the original array
    void push_back(T dtype){
        int sizeArray = sizeof(array);
        
        auto *push_back_array = malloc(dtype); // allocate another n bytes for  the next element
        fill_new_array()
        delete(array);
    }

    void pop_back(int index)
    {
        // free element at index 'index' of the array so that it is no longer part of the vector
    }

};

int main()
{
    // implementation should allow this to be initilaized.
    Vector<int,5> tryMe = {1,2,3,4,5};
}