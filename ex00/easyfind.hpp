#pragma once

#include <iostream>
#include <algorithm>

template<typename t>
int easyfind(t container, int target)
{
    typename t::iterator flag = std::find(container.begin(), container.end(), target);
    if (flag == container.end())
    {
        std::cout << "target not found" << std::endl;
        return (-1);
    }
    std::cout << "target is found" << std::endl;
    return (0);
}