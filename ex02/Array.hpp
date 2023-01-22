#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>

class Array
{
private:
    T *arr;
    int length;

public:
    Array()
    {
        this->arr = nullptr;
    }
    Array(unsigned int n)
    {
        this->arr = new T(n);
    }
    Array(const Array &c)
    {
        this->arr = nullptr;
        *this = c;
    }
    Array &operator=(const Array &c)
    {
        this->length = c.length;
        if (this != &c)
        {
            this->~Array();
            this->arr = new T(c.length);
            for (size_t i = 0; i < count; i++)
                this->arr[i] = c.arr[i];
        }
        return (*this)
    }
    ~Array()
    {
        if (this->arr)
            delete[] this->arr;
    }
};

#endif