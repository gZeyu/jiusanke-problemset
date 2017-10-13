#include <stdio.h>

int main()
{
    int N, n, f, fa, fb;
    
    scanf("%d", &N);
    fa = 0;
    fb = 1;
    
    for (n = 2; n <= N; ++n)
    {
        f = fa + fb;
        fa = fb;
        fb = f;
    }
    
    if (N == 0)
    {
        f = fa;
    }
    else if(N == 1)
    {
        f = fb;
    }
    printf("%d", f);
    
    return 0;
}