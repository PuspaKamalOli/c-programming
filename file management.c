
#include <stdio.h>

int main() {
    /*char content[1000];
    FILE* fptr;
    read a file
    fptr=fopen("text.txt","r");
    if(fptr==NULL){
        printf("file cannot be opened");
    }else{
        fgets(content,1000,fptr);
        printf("%s",content);
        
    }*/
    //write a file
    FILE* fptr;
    fptr=fopen("text.txt","w");
    fputs("hello world",fptr);
    FILE* fp;
    fp=fopen("text.txt","o");
    char content[100];
    fgets(content,100,fp);

    printf("%s",content);

    return 0;
}