#include <stdio.h>

double _abs(double x)
{
    return x >= 0 ? x : -x;
}

int _sqrt(int x)
{
    double n;

    n = 1.0;

    while (_abs(n * n - x) > 1e-5)
    {
        n = (x / n + n) / 2.0;
    }

    return n;
}
int _sqrt1(int x)
{
    int left = 1, right = 0XB505;
    int mid = 0;
    if (x == 0)
    {
        return 0;
    }

    while (left < right)
    {
        if (mid == (left + right) / 2)
        {
            break;
        }
        mid = (left + right) / 2;
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    return mid;
}
int main()
{
    int x;

    while (scanf("%d", &x) != EOF)
    {
        printf("%d\n", _sqrt(x));
    }
    return 0;
}