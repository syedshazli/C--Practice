#include <iostream>

// different ways to initialize a std::vector, must be implemented here.
// example: can init with vector<int, 5>, with no predefined size, etc.
class Vector{

    // takes a templated array and adds values to the end of it
    // aka we must allocate memory for a new element, resizing the original array
    void push_back(& array){
        int sizeArray = sizeof(array);
        
        auto *push_back_array = malloc(sizeArray+1);
        fill_new_array
        delete(array);
    }
};

int main()
{
    // implementation should allow this to be initilaized.
    Vector<int,5> tryMe = {1,2,3,4,5};
}