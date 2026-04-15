#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &arr, int nb)
{

    typename T::iterator it = std::find(arr.begin(), arr.end(), nb);
    if (it != arr.end())
        return it;
    else
        throw std::runtime_error("Value not found in the container!");
}

#endif