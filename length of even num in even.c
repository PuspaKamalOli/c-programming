
#include <stdio.h>
void count();
int main()
{
    count();

    return 0;
}
void count()
{

    int i, arr[6] = {3, 10, 1, 9, 22, 34}, count = 0;
    for (i = 0; i <= 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    printf(" no of even numbers is: %d", count);
}