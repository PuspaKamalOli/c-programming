#include<stdio.h>
#include<string.h>
struct student {
    char name[50];
    int roll_num;
    float marks;
};
int main(){
    struct student s1[3];
    for(int i=0;i<3;i++){
        printf("enter name");
        scanf("%s",s1[i].name);
    }
     for(int i=0;i<3;i++){
        printf("enter roll numbers");
        scanf("%d",&s1[i].roll_num);
    }
    for(int i=0;i<3;i++){
        printf("enter marks:");
        scanf("%f",&s1[i].marks);
    }
    printf(" \n%s with roll number %d obtained%f marks\n",s1[0].name,s1[0].roll_num,s1[0].marks);
      printf("%s with roll number %d obtained%f marks\n",s1[1].name,s1[1].roll_num,s1[1].marks);
        printf("%s with roll number %d obtained%f marks\n",s1[2].name,s1[2].roll_num,s1[2].marks);
    
    
}