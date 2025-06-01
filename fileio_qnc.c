#include<stdio.h>
int main()
{
//Format the information of 5 students (name, marks, cgpa, course) in a table like structure in a file
FILE *file;
file=fopen("info.txt","w");
char name[100];
int marks;
float cgpa;
char course[100];

for(int i=0;i<=5;i++)   //this loop is for the repeating input i.e for the 5 times
{
printf("ENTER YOUR NAME: ");
scanf("%s",&name);
printf("ENTER YOUR MAKRS: ");
scanf("%d",&marks);
printf("ENTER YOUR CGPA: ");
scanf("%f",&cgpa);
printf("ENTER YOUR COURSE");
scanf("%s",&course);


fprintf(file,"NAME: %s\n",name);
fprintf(file,"MARKS: %d\n",marks);
fprintf(file,"CGPA: %f\n",cgpa);
fprintf(file,"COURSE: %s\n",course);
}
return 0;
}