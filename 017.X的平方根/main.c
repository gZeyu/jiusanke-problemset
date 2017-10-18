#include <stdio.h>

int main()
{
    int x;

    while (scanf("%d", &x) != EOF)
    {
        printf("%d\n", _sqrt(x));
    }
    return 0;
}