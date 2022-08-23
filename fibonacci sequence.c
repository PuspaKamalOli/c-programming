
#include <stdio.h>
int fib(int n);
int main()
{
    int n, i;
    printf("enter a number");
    scanf("%d", &n);
    printf("fibonacci sequence upto %d is:", n);
    for (i = 0; i <= n; i++)
    {
        printf("%d \n", fib(i));
    }

    return 0;
}
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
