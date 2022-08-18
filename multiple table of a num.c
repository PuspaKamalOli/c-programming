#include<stdio.h>
int main(){
    
    int a;
    printf("enter value: ");
    scanf("%d",&a);
    printf("multiple of %d are:",a);
    for(int i=1;i<=10;i++){
        
        printf("%d,",i*2);
    }
    
  
}
