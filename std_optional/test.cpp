#include <optional>
#include <iostream>
#include <string>

void print(std::optional<std::string> importantValue){
    if (importantValue)
    {
        std::cout<<"Hey from Mars! This variable is super important and it's value is "<<importantValue<<'\n';


        return;
    }
    std::cout<<"Hey from Mars! I don't know what the important value is, sorry";
}


int main()
{
print(std::nullopt);
}