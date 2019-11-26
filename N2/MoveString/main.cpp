#include <vector>
using namespace std;

void MoveStrings(vector<string>& vector1, vector<string>& vector2)
{
    vector2.insert(vector2.end(), vector1.begin(), vector1.end());
    vector1.clear();
}

int main()
{
    vector<string> source = { "a", "b", "c" };
    vector<string> destination = { "z" };
    MoveStrings(source, destination);
}