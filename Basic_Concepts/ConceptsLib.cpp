#include <iostream>
#include <concepts>

// compile with C++ 20
void print(std::integral auto value){
    std::cout<<"Printing integral value: "<<value<<"\n";
}

int main(){

print(4.32);

return 0;

}