#include <stdio.h>

#define MAX 500

int main()
{
    int n, a[MAX], i, cur;

    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    cur = 0;
    while (cur < n - 1)
    {
        cur += a[cur];
    }

    if (cur == n - 1)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}