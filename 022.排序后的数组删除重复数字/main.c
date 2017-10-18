#include <stdio.h>

#define MAX 200

int main()
{
    int n, a[MAX], i, cnt, cur;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    
    cnt = 0;
    cur = 0;
    for (i = 0; i < n; ++i)
    {
        if (a[cur] == a[i])
        {
            cnt += (i - cur) < 2 ? 0 : 1; //a[i]出现过两次以上则加一
        }
        else
        {
            cur = i;
        }
    }
    
    printf("%d", n - cnt);

    return 0;
}