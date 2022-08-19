
#include <stdio.h>

int main() {
 int a=2,b=3,t=b;
 printf("unswapped values of a and b: %d,%d\n",a,b);
 b=a;a=t;
 printf("swapped values of a and b: %d,%d\n",a,b);
    return 0;
}