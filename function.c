
#include <stdio.h>
void pointer();
int main()
{
    pointer();
    return 0;
}
void pointer()
{
    int num = 90;
    int *ptr = &num;
    int num_1 = *ptr;
    // print address of num variable
    printf("%d \n", ptr);
    // print value stored in the given location
    printf("%d", *ptr);
    printf("%d", num_1);
}