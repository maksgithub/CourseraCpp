#include "pch.h"
#include "VectorsHelper.h"
#include <iostream>
#include <vector>

using namespace std;

std::string VectorToString(vector<string> vector)
{
    string res;
    for (auto value : vector)
    {
        res += value + " ";
    }
    return res;
}

std::string MapToString(std::vector<std::string> vector)
{
}
