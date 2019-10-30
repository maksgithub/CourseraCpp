#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    string min;
    cin >> min;
    for (int i = 0; i < 2; i++)
    {
        cin >> s;
        if (min > s)
        {
            min = s;
        }
    }
    cout << min;
}