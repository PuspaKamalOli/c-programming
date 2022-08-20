
#include <stdio.h>

int main() {
    int i,j,arr[5],temp;
    printf("enter 5 numbers");
    for(i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
           if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }
    }
    for(i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}