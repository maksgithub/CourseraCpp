#include <iostream>
#include <vector>

int main()
{
    int n, sum = 0;
    std::cin >> n;

    std::vector<int> vector(n);
    std::vector<int> vector2;

    for (size_t i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        sum += a;
        vector[i] = a;
    }

    for (size_t i = 0; i < n; i++)
    {
        if(vector[i] > sum/n)
        {
            vector2.push_back(i);
        }
    }
    std::cout << vector2.size() << "\n";

    for (int vector21 : vector2)
    {
        std::cout << vector21 << " ";
    }
}
