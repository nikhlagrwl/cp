// This function calculates the value of a^b in log(b) time complexity
// The approach is commonly known as Binary Exponentiation

long long binary_exponentiation(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}