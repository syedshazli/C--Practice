#include <iostream>
#include <array>
#include <vector>

template <typename T>
class helloThere{

    void speak(T speaker)
    {
        auto name = speaker;
        std::cout<<"Hey there "<<name<<" ";
    }

};

int main()
{
    auto helloT = new helloThere;
    helloT.speak("Skippy");

}