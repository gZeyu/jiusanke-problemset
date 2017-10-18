#include <stdio.h>

#define MAX 100

int main()
{
    int n, a[MAX], i;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    
    for (i = n - 1; i > -1; --i)
    {
        a[i]++;
        if (a[i] >= 10)
        {
            a[i] = 0;
        }
        else
        {
            break;
        }
    }
    
    if (a[0] == 0)// 999+1 -> 1000
    {
        printf("1 ");
    }
    for (i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}