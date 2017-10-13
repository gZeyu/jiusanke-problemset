#include <stdio.h>

double _abs(double x)
{
    return x >= 0 ? x : -x;
}

int _sqrt(int x) // 牛顿下降法
{
    double n;

    n = 1.0;

    while (_abs(n*n - x) > 1e-5)
    {
        n = (x / n + n) / 2.0;
    }

    return n;
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