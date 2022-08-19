
#include <stdio.h>

int main()
{
    int a = 89;
    int *ptr = &a;
    int **pptr = &ptr;
    printf("%d \n", pptr);
    printf("%d", **pptr);

    return 0;
}