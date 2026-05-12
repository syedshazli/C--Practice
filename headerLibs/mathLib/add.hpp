#ifndef ADD_H
#define ADD_H

#include "sub.hpp"

inline int add(int a, int b)
{
    return sub(a,b) + a+b; // can call other functions defined in our other headers
}
inline float mult(int a, int b)
{
    return a*b;
}
#endif