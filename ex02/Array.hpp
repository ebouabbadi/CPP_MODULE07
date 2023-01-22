#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
private:
    T *arr;
    unsigned int length;

public:
    Array()
    {
        this->arr = nullptr;
        this->length = 0;
    }
    Array(unsigned int n)
    {
        this->arr = new T[n];
        this->length = n;
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
            this->arr = new T[c.length];
            for (size_t i = 0; i < c.length; i++)
                this->arr[i] = c.arr[i];
        }
        return (*this);
    }
    ~Array()
    {
        if (this->arr)
            delete[] this->arr;
    }
    T &operator[](unsigned int i) const
    {
        if (i >= this->length || i < 0)
            throw ExceptionIndex();
        return (this->arr[i]);
    }
    unsigned int size() const
    {
        return this->length;
    }
    class ExceptionIndex : public std::exception
    {
    public:
        char *what() const throw()
        {
            return (char *)"INDEX IS OUT OF BOUNDS";
        }
    };
};

#endif