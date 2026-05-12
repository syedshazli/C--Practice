#include "mathLib/add.hpp"
#include "mathLib/sub.hpp"
#include <stdio.h>

int main()
{
    printf("Im adding from add.hpp, result is %d\n", add(2,5));
    printf("I'm subtracting from sub.hpp, result is %d", sub(7, 4));
}