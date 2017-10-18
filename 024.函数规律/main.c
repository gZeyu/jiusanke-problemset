#include <stdio.h>

int func(char *in)
{
    char *p;
    int cnt;

    p = in;
    cnt = 0;

    while (*p != '\n')
    {
        switch (*p)
        {
        case '0':
            cnt += 1;
            break;
        case '6':
            cnt += 1;
            break;
        case '8':
            cnt += 2;
            break;
        case '9':
            cnt += 1;
            break;
        }
        ++p;
    }

    return cnt;
}

int main()
{
    char in[MAX], *p;

    p = in;
    while (scanf("%c", p) != EOF)
    {
        ++p;
    }
    *p = '\n';

    printf("%d", func(in));

    return 0;
}