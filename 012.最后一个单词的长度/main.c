#include <stdio.h>
#include <string.h>

#define N 10000

int main()
{
    char str[N];
    int cur, cnt;
    
    scanf("%[^\n]", str); //匹配整行字符串
    cur = strlen(str) - 1;
    while(str[cur] == ' ') // 过滤末尾空格
    {
        --cur;
    }
    cnt = 0;
    while (cur > 0 && str[cur] != ' ') // 遇到边界或空格停止计数
    {
        ++cnt;
        --cur;
    }
    
    printf("%d", cnt);
    
    return 0;
}