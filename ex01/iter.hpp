#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
T func(T c)
{
    return (c);
}

template <typename T>
void iter(T *arr, int length, T(funcion)(T c))
{
    for (int i = 0; i < length; i++)
        std::cout << funcion(arr[i]) << std::endl;
}

#endif