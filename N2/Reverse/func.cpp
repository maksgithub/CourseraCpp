#include <vector>

std::vector<int> Reversed(const std::vector<int>& v)
{
    auto size = v.size();
    std::vector<int> s((size));
    s = v;
    int n = size;
    for (int i = 0; i < n / 2; ++i) {
        int tmp = v[i];
        s[i] = v[n - 1 - i];
        s[n - 1 - i] = tmp;
    }
    return s;
}