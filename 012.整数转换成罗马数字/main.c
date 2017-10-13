#include <stdio.h>
#include <string.h>

#define MAX 3999

int main()
{
    int num;
    char* map[4][10]={
            {"","I","II","III","IV","V","VI","VII","VIII","IX"},
            {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
            {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
            {"","M","MM","MMM"}
    };
    char str[12];
    
    scanf("%d", &num);
    
    strcat(str, map[3][num/1000%10]);
    strcat(str, map[2][num/100%10]);
    strcat(str, map[1][num/10%10]);
    strcat(str, map[0][num%10]);
    
    printf("%s\n", str);
    
    return 0;
}