#include <stdio.h>

#define MAX 500

int main()
{
    int n, num[MAX], target, idx1, idx2, i;

    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }
    scanf("%d", &target);

    for (idx1 = 0; idx1 < n - 1; ++idx1)
    {
        for (idx2 = idx1 + 1; idx2 < n; ++idx2)
        {
            if (num[idx1] + num[idx2] == target)
            {
                printf("%d %d", idx1 + 1, idx2 + 1);
                return 0;
            }
        }
    }

    return 0;
}