int Factorial(int s);

int Factorial(int s) {
    if (s <= 0)
        return 1;

    return s * Factorial(s - 1);
}
