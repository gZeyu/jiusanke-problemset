#include <stdio.h>
#include<malloc.h>
#define MAX 250

typedef struct ansNode
{
    int a;
    int b;
    struct ansNode *next;
}AnsNode;

int main()
{
    int N, M, num[MAX*MAX*2], length, maxB, i, j, b, flag;
    int is[MAX*MAX*2] = {0};
    AnsNode *ansHead, *pAnsNode;
    
    scanf("%d\n%d", &N, &M);

    for (i = 0; i < M; ++i)
    {
        for (j = 0; j < M; ++j)
        {
            is[i*i + j*j] = 1; // 元素下标为双平方数则置1
        }
    }

    length = 0;
    for (i = 0; i < M*M*2; ++j)
    {
        if (is[i] == 1)
        {
            num[length++] = i; // 储存双平方数
        }
    }

    maxB = (MAX*MAX*2 - 1)/(N - 1); // MAX*MAX*2 = 1 + (N - 1)*maxB
    pAnsNode = ansHead;
    for (b = 0; i <= maxB; ++b)
    {
        for (i = 0; num[i] + (N - 1)*B <= M*M*2; ++i)
        {
            for (j = 1; j < N; ++j)
            {
                flag = 1;
                if (is[a[i] + j*B] == 1)
                {
                    flag = 1; // 等差序列第j个元素为双平方数则置1
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) // flag为1则保持a和b
            {
                pAnsNode->next = (AnsNode *)malloc(sizeof(AnsNode));
                pAnsNode = pAnsNode->next;
                pAnsNode->a = a[i];
                pAnsNode->b = b;
                pAnsNode->next = NULL;
            }
        }
    }








    

    return 0;
}