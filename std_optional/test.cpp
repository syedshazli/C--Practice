#include <optional>
#include <iostream>
#include <string>

void print(std::optional<int> importantValue = std::nullopt){
    if (importantValue.has_value())
    {
     
        std::cout<<"Hey from Mars! This variable is super important and it's value is "<<importantValue.value()<<'\n';


        return;
    }
    std::cout<<"Hey from Mars! I don't know what the important value is, sorry \n";
}


int main()
{
print();
print(3);
}