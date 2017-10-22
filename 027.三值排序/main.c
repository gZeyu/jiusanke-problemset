#include <stdio.h>

#define MAX 1000
int func1(int N, int *num)
{
    int cnt, i, a;
    int range[4] = {0};

    for (i = 0; i < N; ++i)
    {
        ++range[num[i]];
    }
    for (i = 1; i < 4; ++i)
    {
        range[i] += range[i - 1];
    }

    cnt = 0;
    for (i = range[0]; i < range[1]; ++i)
    {
        if (num[i] != 1)
        {
            ++cnt;
        }
    }
    for (i = range[1]; i < range[2]; ++i)
    {
        if (num[i] != 2)
        {
            ++cnt;
        }
    }
    for (i = range[2]; i < range[3]; ++i)
    {
        if (num[i] != 3)
        {
            ++cnt;
        }
    }

    return cnt/2;
}

int func2(int N, int *num)
{
    int x,y,z, i;
    int range[4] = {0};

    for (i = 0; i < N; ++i)
    {
        ++range[num[i]];
    }
    for (i = 1; i < 4; ++i)
    {
        range[i] += range[i - 1];
    }

    x = 0;
    y = 0;
    z = 0;
    for (i = range[0]; i < range[1]; ++i)
    {
        if (num[i] != 1)
        {
            ++x;
        }
    }
    for (i = range[1]; i < range[2]; ++i)
    {
        if (num[i] == 3)
        {
            ++y;
        }
    }
    for (i = range[2]; i < range[3]; ++i)
    {
        if (num[i] == 2)
        {
            ++z;
        }
    }

    return x + (y > z ? y : z);
}
int main()
{
    int N, num[MAX], i, j, tmp, cnt;
    int range[4] = {0};
    int cur[4] = {0};

    scanf("%d", &N);
    for (i = 0; i < N; ++i)
    {
        scanf("%d", &num[i]);
    }

    printf("%d\n", func1(N, num));
    printf("%d\n", func2(N, num));
    for (i = 0; i < N; ++i)
    {
        ++range[num[i]];
    }
    cur[0] = 0;
    for (i = 1; i < 4; ++i)
    {
        range[i] += range[i - 1]; // 计算升序中1,2,3的分布范围
        cur[i] = range[i - 1];
    }

    cnt = 0;
    for (i = 0; i < N; ++i)
    {
        if (i >= range[num[i] - 1] && i < range[num[i]])
        {
            continue; // 该元素在原序列的下标恰好处于升序序列中的分布范围,则无需交换
        }
        while(num[cur[num[i]]] == num[i]) // 将cur按顺序指到最近的未处于正确位置元素的下标
        {
            ++cur[num[i]];
        }
        tmp = num[cur[num[i]]];
        num[cur[num[i]]++] = num[i];
        num[i] = tmp;
        ++cnt;
    }

    printf("%d\n", cnt);

    return 0;
}