#include <stdio.h>

#define MAX 50000

void func(char *in, char *out)
{
    int i, curIn, curOut;

    i = 1;
    curIn = 0;
    curOut = 0;
    while (in[i - 1] != '\0')
    {
        if (in[i] != in[curIn])
        {
            out[curOut++] = i - curIn + '0';
            out[curOut++] = in[curIn];
            curIn = i;
        }
        ++i;
    }
    out[curOut] = '\0';
    return;
}

int main()
{
    int n, i;
    char inBuff[MAX], outBuff[MAX], *in, *out, *tmp;
    while (scanf("%d", &n) != EOF)
    {

        outBuff[0] = '1';
        outBuff[1] = '\0';
        in = inBuff;
        out = outBuff;
        for (i = 1; i < n; ++i)
        {
            tmp = in;
            in = out;
            out = tmp;
            func(in, out);
        }
        printf("%s\n", out);
    }

    return 0;
}