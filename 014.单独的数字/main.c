#include <stdio.h>

#define N 500

int main()
{
    int n, a, b, i, j;
    int bitMap[32] = {0};
    
    scanf("%d\n", &n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d ", &a);
        for (j = 0; j < 32; ++j)
        {
            bitMap[j] += (a>>j) & 1;
        }
    }
    
    b = 0;
    for (i = 0; i < 32; ++i)
    {
        b |= (bitMap[i]%3 == 1 ? 1 : 0)<<i;
    }

    printf("%d\n", b);
    
    return 0;
}