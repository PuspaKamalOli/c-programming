
#include <stdio.h>

int main()
{
    int i, j, m[2][2], t[2][2];

    printf("values for matrix");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    printf("the matrix is");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\n", m[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            t[j][i] = m[i][j];
        }
    }

    printf("the transposed matrix is");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\n", t[i][j]);
        }
    }

    return 0;
}