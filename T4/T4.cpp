#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    std::cin >> a >> b;

    while (true)
    {
        auto d = a / b;
        if(d < b)
        {
            cout << d;
            break;
        }
    }
}