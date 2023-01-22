#include "iter.hpp"

int main()
{
    /* - - - - - - arr of integer - - - - - - -*/
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, func);

    /* - - - - - - arr of string - - - - - - -*/

    std::string login[] = {"ebouabba", "hbadr"};
    iter(login, 2, func);
    return (0);
}