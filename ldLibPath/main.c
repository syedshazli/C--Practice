#include <stdio.h>
#include "myMath.h"
#include "moreMath.h"
/**
 * first compile: $ gcc main.c -o myapp -L. -lmathlib
 * -L. tells compiler to only look in current directory for any libraries
 * $ main.c:2:10: fatal error: myMath.h: No such file or directory
 *  */ 

int main()
{
    int a,b = 6;
    int resultofAdd = add(a,b);

    int c,d = 7;
    int resultofSubtract = subtract(a,b);
    printf("Result of add is %d", resultofAdd);
    printf("Result of subtract is %d", resultofSubtract);
}