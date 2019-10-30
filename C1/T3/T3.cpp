#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    auto k = b * b - 4 * a * c;
    if (k < 0) {
        return 0;
    }
    if (a == 0) {
        cout << -c / b;
        return 0;
    }
    auto r1 =(-b + sqrt(k)) / (2 * a);
    auto r2 = (-b - sqrt(k)) / (2 * a);
    if (r1 == r2) {
        cout << r1;
    }
    else {
        cout << r1 << " " << r2;
    }
}