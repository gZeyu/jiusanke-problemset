#include <stdio.h>

#define MAX_NUMBER_CLASS 100
#define MAX_NUMBER_STUDENT_PER_CLASS 90
#define MAX_LENGTH_NAME 90

typedef struct ClassInfo
{
    int stuNum;
    int weight[MAX_NUMBER_STUDENT_PER_CLASS];
    char name[MAX_NUMBER_STUDENT_PER_CLASS][MAX_LENGTH_NAME];
} ClassInfo;

int main()
{
    int n, i, j,  d, w, h, classNum, maxIdx, minIdx;
    ClassInfo classInfo[MAX_NUMBER_CLASS];
    
    for (i = 0, n = 0; n != -1; ++i)
    {
        scanf("%d\n", &n);
        classInfo[i].stuNum = n;
        for (j = 0; j < n; ++j)
        {
            scanf("%d %d %d %s\n", &d, &w, &h, classInfo[i].name[j]);
            classInfo[i].weight[j] = d*w*h;  
        }
    }
    classNum = i - 1;
    
    maxIdx = 0;
    minIdx = 0;
    for (i = 0; i < classNum; ++i)
    {
        for (j = 0; j < classInfo[i].stuNum; ++j)
        {
            maxIdx = classInfo[i].weight[j]>classInfo[i].weight[maxIdx]?j:maxIdx;
            minIdx = classInfo[i].weight[j]<classInfo[i].weight[minIdx]?j:minIdx;
        }
        printf("%s took clay from %s.\n", classInfo[i].name[maxIdx], classInfo[i].name[minIdx]);
    }

    return 0;
}