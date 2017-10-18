#include <stdio.h>
#include <string.h>

#define MAX 3999

int map(char c)
{
    int n;
    switch (c){ 
        case 'I' : n = 1; break;
        case 'V' : n = 5; break;
        case 'X' : n = 10; break;
        case 'L' : n = 50; break;
        case 'C' : n = 100; break;
        case 'D' : n = 500; break;
        default : n = 1000; break; 
    }
    return n;
}

int main()
{
    char str[12];
    int i, num;
    
    scanf("%s\n", str);
    
    num = 0;
    for (i = 0; str[i + 1] != '\0'; ++i)
    {
        num += map(str[i])*(map(str[i]) >= map(str[i + 1]) ? 1 : -1);
    }
    num += map(str[i]);
    
    printf("%d\n", num);
    
    return 0;
}