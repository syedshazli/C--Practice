#include <optional>
#include <iostream>
#include <stdexcept>
void print(std::optional<int> importantValue = std::nullopt){
    if (importantValue.has_value())
    {
     
        std::cout<<"Hey from Mars! This variable is super important and it's value is "<<importantValue.value()<<'\n';


        return;
    }
    std::cout<<"Hey from Mars! I don't know what the important value is, sorry \n";
}

int add(std::optional<int> a = std::nullopt, std::optional<int> b = std::nullopt)
{
    if (a.has_value() && b.has_value())
    {

        return a.value() + b.value();
    }
    else{throw std::invalid_argument("Bad input."); }
}
int main()
{
int a,b = 6;
int addition = add(a,b);
std::cout<<"Result is "<<addition<<'\n';


// print();
// print(3);
}