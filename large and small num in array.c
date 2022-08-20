#include <stdio.h>
int main()
{

    int large, small, arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("enter a number");
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j <= 4; j++)
    {
        large = arr[0];
        small = arr[0];
        if (large <= arr[j])
        {
            large = arr[j];
        }
        if (small >= arr[j])
        {
            small = arr[j];
        }
    }
    printf("the largest is %d", large);
    printf("the smallest is %d", small);
    return 0;
}