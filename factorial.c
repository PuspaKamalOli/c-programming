
#include <stdio.h>
int main()
{
    int a, f = 1;
    printf("enter the number: ");
    scanf("%d", &a);
    for (int i; i <= a; i++)
    {
        f = f * i;
    }
    printf("%d", f);
    return 0;
}