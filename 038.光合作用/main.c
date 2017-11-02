#include <stdio.h>
#include <stdlib.h>

#define MAX 100001

int partition(int *A, int p, int r)
{
    int x, tmp, i, j;

    x = A[r];
    i = p;
    j = p;
    while (j < r)
    {
        if (A[j] <= x)
        {
            tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
            ++i;
        }
        ++j;
    }
    tmp = A[i];
    A[i] = A[r];
    A[r] = tmp;

    return i;
}

void quickSort(int *A, int p, int r)
{
    int q;
    if (p < r)
    {
        printArray(A, 8);
        q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
    return;
}

int main()
{
    int T, n, m, H, X[MAX], light[MAX], t, i, j, left, right, middle;

    scanf("%d", &T);
    for (t = 0; t < T; ++t)
    {
        scanf("%d %d %d", &n, &m, &H);
        for (i = 1; i <= m; ++i)
        {
            scanf("%d", &light[i]);
        }
        quickSort(light, 0, m - 1);

        for (i = 1; i <= n; ++i)
        {
            left = 1;
            right = m;
            while (left < right)
            {
                middle = (left + right)/2;
                if (light[middle] < i)
                {
                    left = middle + 1;
                }
                else
                {
                    right = middle - 1;
                }
            }
        }
    }
    return 0;
}