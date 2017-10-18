#include <stdio.h>

#define MAX 51

long long nCrMap[MAX][MAX];

long long nCr(long long n, long long r)
{
    if (nCrMap[n][r] > 0)
        return nCrMap[n][r];
    if (r == 0)
        return nCrMap[n][r] = 1;
    if (n == r)
        return nCrMap[n][r] = 1;
    return nCrMap[n][r] = nCr(n - 1, r) + nCr(n - 1, r - 1);
}

int main()
{
    int n, maxP, p;
    long long sum;

    scanf("%d", &n);

    maxP = n / 2;
    sum = 0;
    for (p = 0; p <= maxP; ++p)
    {
        sum += nCr(n - p, p);
    }

    printf("%lld\n", sum);

    return 0;
}