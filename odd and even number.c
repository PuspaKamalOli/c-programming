
#include <stdio.h>

int main()
{
    int a;
    printf("enter any  number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf(" %d is even", a);
    }
    else if (a % 2 != 0)
    {
        printf(" %d is odd", a);
    }
    else
    {
        printf("enter natural number please!!..");
    }

    return 0;
}