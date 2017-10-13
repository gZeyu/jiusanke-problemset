#include <stdio.h>

int main()
{
    int M, N, T, mat[40000], row, col;
    
    scanf("%d %d %d\n", &M, &N, &T);
    for (row = 0; row < M; ++row)
    {
        for (col = 0; col < N; ++col)
        {
            scanf("%d ", &mat[row*N + col]);
        }
        scanf("\n");
    }
    
    for (row = 0; row < M; ++row)
    {
        for (col = 0; col < N; ++col)
        {
            if (T == 0)
            {
                printf("%d ", mat[row*N + (N - 1 - col)]);
            }
            else
            {
                printf("%d ", mat[(M - 1 - row)*N + col]);
            }
        }
        printf("\n");
    }
        
    return 0;
}