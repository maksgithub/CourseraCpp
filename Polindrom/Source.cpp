#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

bool IsPalindrom(string s)
{
    int i = 0;
    auto length = s.length();
    auto last = length - 1;
    bool res = i <= last;
    while (i < last && length > 0)
    {
        if (s[i] != s[last])
        {
            res = false;
            break;
        }
        ++i;
        last -= 1;
    }
    return res;
}

vector<string> PalindromFilter(vector<string> words, int minLength)
{
    vector<string> res;
    for (auto p : words)
    {
        if (IsPalindrom(p) && p.length() >= minLength)
        {
            res.push_back(p);
        }
    }
    return res;
}

int main()
{
    vector<string> res = { "weew", "bro", "code" };
    auto r = PalindromFilter(res, 4);
}
