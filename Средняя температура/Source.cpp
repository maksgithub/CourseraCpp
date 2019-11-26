#include <iostream>
#include <vector>
#include <algorithm>

struct Man
{
    bool Status;
};

int main()
{
    int n;
    std::cin >> n;

    std::vector<Man> vector;

    for (size_t i = 0; i < n; i++)
    {
        int b;
        std::string a;
        std::cin >> a;
        if (a == "COME")
        {
            std::cin >> b;
            if (b > 0)
            {
                for (int i = 0; i < b; ++i)
                {
                    Man m{};
                    m.Status = true;
                    vector.push_back(m);
                }
            }
            else if (b < 0)
            {
                for (int i = 0; i < abs(b); ++i)
                {
                    vector.pop_back();
                }
            }
        }

        if (a == "QUIET")
        {
            std::cin >> b;
            vector[b].Status = true;
        }

        if (a == "WORRY")
        {
            std::cin >> b;
            vector[b].Status = false;
        }

        if (a == "WORRY_COUNT")
        {
            int num_items3 = std::count_if(vector.begin(), vector.end(), [](Man i) {return !i.Status; });
            std::cout << num_items3 << std::endl;
        }
    }
}
