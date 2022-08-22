#include <stdio.h>
#include <string.h>
struct student
{
   char name[50];
   char major_sub[50];
   int roll_num;
   float gpa;
};
int main()
{
   struct student s1;
   strcpy(s1.name, "Mr_oli");
   strcpy(s1.major_sub, "artificial intelligence");
   s1.roll_num = 34;
   s1.gpa = 3.5;
   printf("name: %s \n", s1.name);
   printf("field of interest: %s\n", s1.major_sub);
   printf("roll number:%d\n", s1.roll_num);
   printf("gpa:%f\n", s1.gpa);
   return 0;
}