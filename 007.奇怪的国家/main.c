#include <stdio.h>

#define N 50
int main()
{
    char a[N], b[N];
    int i;
    scanf("%s\n", a);
    scanf("%s\n", b);
    
    for (i = 0; a[i] != '\0'; ++i)
    {
        printf("%c", a[i] ==  b[i] ? '1' : '0');
    }
    printf("\n");
    return 0;
}