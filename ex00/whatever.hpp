#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
template <typename T>
void swap(T &a, T &b)
{
    T swap;
    swap = a;
    a = b;
    b = swap;
}

template <typename T>
T min(T a, T b)
{
    return (a < b ? a : b);
}

template <typename T>
T max(T a, T b)
{
    return (a > b ? a : b);
}

#endif