#include <iostream>

// enums allow us to use descriptive terminology to describe the current state that our program is in. Based on enum values, we can alter our control flow accordingly.
// enums can store the list of available states as a string, and the programmer can set the enum value..
enum myEnum{
    IS_VISIBILE = 1,
    IS_KINDA_VISIBLE = 2,
    IS_UNAVAILABLE = 0
};

int main()
{
myEnum check;
check = IS_KINDA_VISIBLE;

if (check == IS_KINDA_VISIBLE)
{
    std::cout<<"Nice, let's do some logic for when something is kinda visible.\n";
}
else if (check == IS_VISIBILE)
{
    std::cout<<"Nice, let's account for when something in our program is visible\n";
}

// since we assigned custom values to the enum, we can also check if something is not available
check = IS_UNAVAILABLE;
if (!check) // aka is not unavailable
{
std::cout<<"Sorry, it is not visible to us \n";
}
}