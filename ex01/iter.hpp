

template <class T>
T func(T c)
{
    return (c);
}

template <class T>
void iter(T *arr, int length, T(funcion)(T c))
{
    for (int i = 0; i < length; i++)
        std::cout << funcion(arr[i]) << std::endl;
}

#endif