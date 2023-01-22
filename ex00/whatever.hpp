#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
template <class T>
void swap(T &a, T &b)
{
    T swap;
    swap = a;
    a = b;
    b = swap;
}

template <class T>
T min(T a, T b)
{
    return (a < b ? a : b);
}

template <class T>
T max(T a, T b)
{
    return (a > b ? a : b);
}

#endif