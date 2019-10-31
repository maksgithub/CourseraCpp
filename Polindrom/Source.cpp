#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

bool IsPalindrom(string s)
{
    int i = 0;
    auto last = s.length() - 1;
    bool res = i <= last;
    while (i < last)
    {
        if (s[i] != s[last])
        {
            res = false;
            break;
        }
        i++;
        last -= i;
    }
    return res;
}

int main()
{
    string s;
    std::cin >> s;
    cout << IsPalindrom(s);
}
