#include <vector>
#include "func.h"

void Print(const std::vector<int>& is)
{
}

std::vector<int> Read()
{
    auto is = std::vector<int>{1, 3, 4};
    return is;
}

int main()
{
    Print(Reversed(Read()));
}
