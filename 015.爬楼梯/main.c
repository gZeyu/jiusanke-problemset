#include <stdio.h>

#define MAX 25

long nCrMap[MAX][MAX];

long nCr(long n, long r)
{
    if(nCrMap[n][r] > 0) return nCrMap[n][r];
    if(r == 0) return nCrMap[n][r] = 1;
    if(n == r) return nCrMap[n][r] = 1;
    return nCrMap[n][r] = nCr(n-1, r)+ nCr(n-1, r-1);
}

int main()
{
    int n, maxP, p, i;
    long sum;
    
    scanf("%ld", &n);
    
    for (i = 1; i <= 30; i++)
    {
        n = i;
        maxP = n / 2;
        sum = 0;
        for (p = 0; p <= maxP; ++p)
        {
            sum += nCr(n - p, p); 
        }
        printf("%ld\n", sum);
    }
    
    return 0;
}