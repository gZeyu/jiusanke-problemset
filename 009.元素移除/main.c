#include <stdio.h>

#define N 100

int main()
{
    int n, a[N], elem, i, cnt;
    
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &elem);
    
    cnt = 0;
    for (i = 0; i < n; ++i)
    {
        cnt += elem == a[i] ? 1 : 0; 
    }
    
    printf("%d", n - cnt);
    
    return 0;
}