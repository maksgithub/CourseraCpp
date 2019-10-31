#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    std::cin >> a >> b;
    if(b != 0)
    {
        const auto d = a / b;
        cout << d;
    }
    else
    {
        cout << "Impossible";
    }
}