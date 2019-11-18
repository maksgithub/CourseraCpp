void UpdateIfGreater(const int i, int& b);

int main()
{
    int a = 4;
    int b = 2;
    UpdateIfGreater(a, b);
}

void UpdateIfGreater(const int i, int& b)
{
    if(i > b)
    {
        b = i;
    }
}