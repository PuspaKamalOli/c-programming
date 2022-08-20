#include <stdio.h>
int main()
{
    int m_1[2][2], m_2[2][2], sum[2][2], i, j;

    printf("enter values of matrix-1");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &m_1[i][j]);
        }
    }

    printf("enter values of matrix-2");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &m_2[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = m_1[i][j] + m_2[i][j];
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("the sum is %d \n", sum[i][j]);
        }
    }
    return 0;
}