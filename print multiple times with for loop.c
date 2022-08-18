#include <stdio.h>
int main()
{
    char ch;
    printf("enter any character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("lower case");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("upper case");
    }

    else
    {
        printf("enter valid character");
    }

    return 0;
}