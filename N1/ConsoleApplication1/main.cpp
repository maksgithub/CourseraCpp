// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    if (s.length() == 0)
        return 1;
    auto a = s.find("f");
    if (a > s.length())
        std::cout << -2;

    s.replace(a, 1, "3");

    auto b = s.find("f");
    if (b > 0 && b <= s.length())
        std::cout << b;
    else if(a >= 0 && a <= s.length())
    {
        std::cout << -1;
    }
    else
    {
        std::cout << -2;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
