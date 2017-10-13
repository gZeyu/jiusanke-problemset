#include <stdio.h>

#define N 1000

int main()
{
    int n, a, b, i, cnt;
    
    scanf("%d\n", &n);
    
    b = 1001;
    cnt = 0;
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a);
        if (b != a)
        {
            ++cnt;
            b = a;
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}