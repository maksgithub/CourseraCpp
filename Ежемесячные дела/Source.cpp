#include <iostream>
#include <vector>

using namespace std;

struct Man
{
    bool Status;
};

int main()
{
    vector<int> days = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int current = 0;

    vector<vector<string>> work(days[current]);
    work.assign(days[current], vector<string>());
    int n;
    std::cin >> n;

    for (size_t j = 0; j < n; j++)
    {
        std::string command;
        std::cin >> command;
        if (command == "ADD")
        {
            int i;
            string s;
            std::cin >> i >> s;
            work[i - 1].push_back(s);
        }

        if (command == "DUMP")
        {
            int i;
            std::cin >> i;
            cout << work[i - 1].size();
            for (auto value : work[i - 1])
            {
                cout << " " << value;
            }
            std::cout << endl;
        }

        if (command == "NEXT")
        {
            current++;
            if (current >= days.size())
            {
                current = 0;
            }
            auto daysCount = days[current];
            const int delta = daysCount - work.size();
            if (delta > 0)
            {
                vector<vector<string>> buff;
                buff.assign(delta, vector<string>());
                work.insert(end(work), begin(buff), end(buff));
            }
            else
            {
                vector<vector<string>> buff(daysCount);
                vector<string> last;
                for (size_t t = 0; t < daysCount; t++)
                {
                    buff[t] = work[t];
                }

                for (size_t t = work.size() + delta; t < work.size(); t++)
                {
                    for (const auto& value : work[t])
                    {
                        buff[daysCount - 1].push_back(value);
                    }
                }
                work = buff;
            }
        }
    }
}
