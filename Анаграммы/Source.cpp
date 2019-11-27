//3
//eat tea
//find search
//master stream

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int c;
    cin >> c;

    for (int i = 0; i < c; ++i)
    {
        string a, b;
        map<string::value_type, int> ma, mb;
        std::cin >> a >> b;

        for (string::value_type value : a)
        {
            ma[value]++;            
        } 

        for (string::value_type value : b)
        {
            mb[value]++;            
        }
        bool b2 = true;

        for (auto value : mb)
        {
            if(ma[value.first] != mb[value.first])
            {
                b2 = false;
                break;
            }
        }
        if (b2 && ma.size() == mb.size())
        {
            std::cout << "YES" << endl;
        }
        else
        {
            std::cout << "NO" << endl;
        }
    }
}