#include <stdio.h>
#include <math.h>

int main()
{
    int a, i, flag;
    
    scanf("%d", &a);
    
    for (i = 2, flag = 0; i <= sqrt(a); ++i)
    {
        if (a%i == 0)
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}