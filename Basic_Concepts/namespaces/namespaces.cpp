#include <iostream>

// need unqiue names for functions, classes, structs, etc
// wrap things into namespaces

// in this example, compiler doesn't know difference between two diff print methofs

namespace A{
// to print from here we need A::Print
void print(){
    std::cout<<"Print for me \n";
}

}


// when using the namespace, this is now the global print
void print(){
    std::cout<<"Im another printer\n";
}

int main(){
    print();
    A::print();
}