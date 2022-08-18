
#include <stdio.h>
void find_sum();
void find_sub();

int main(){
   
    find_sub();
     find_sum(8,9);
    
}
void find_sum(int a,int b){
    printf("the sum is %d \n",a+b);
}
void find_sub(){
    int a,b;
    printf("enter subtractor: ");
    scanf("%d",&a);
    printf("enter the number to be subtracted: ");
    scanf("%d",&b);
    printf("the subtraction result is: %d\n",a-b);
}