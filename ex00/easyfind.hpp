#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>

void easyfind(T& arg1, int arg2)
{
    if (std::find( arg1.begin(), arg1.end(), arg2) != arg1.end())
        std::cout << "Found." << std::endl;
    else
        std::cout << "Not found." << std::endl;
}

#endif