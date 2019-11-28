#include "pch.h"
#include "VectorsHelper.h"
#include <iostream>
#include <vector>

void PrintVector(std::vector<std::string> vector)
{
    for (auto value : vector)
    {
        std::cout << value << " ";
    }
}

std::string GetVectorStr(std::vector<std::string> vector)
{
    std::string res;
    for (auto value : vector)
    {
        res += value + " ";
    }
}
