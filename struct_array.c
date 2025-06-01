#include<stdio.h>
#include<string.h>
struct student{
    char name[500];
    int roll;
    float cgpa;
};
int main()
{   
struct student CSE[500];   //here s1 is the element of the array
CSE[0].roll=5;
CSE[0].cgpa=9.8;
strcpy(CSE[0].name,"akash");
printf("the name of student is: %s and the roll and cgpa is %d and %f respectively",CSE[0].name,CSE[0].roll,CSE[0].cgpa);
}