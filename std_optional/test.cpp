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

std::optional<int> add(std::optional<int> a = std::nullopt, std::optional<int> b = std::nullopt)
{
    if (a.has_value() && b.has_value())
    {

        return a.value() + b.value();
    }
    else{return std::nullopt;}
}
int main()
{
if (add(2,3))
{
    std::cout<<"Result is "<<add(2,3).value()<<'\n';
}
else{

    std::cout<<"There was an error!\n";
}


print();
print(3);
}