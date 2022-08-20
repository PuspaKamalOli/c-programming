#include <stdio.h>
int main()
{
    int arr[5] = {1, 34, 12, 89, 11}, i, m = 34, n;
    for (i = 0; i < 5; i++)
    {
        if (m == arr[i])
        {
            n = i;
        }
    }
    printf("%d", n);
    return 0;
}