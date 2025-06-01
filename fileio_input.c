#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("student.txt","w");
    char name[100];
    int roll;
    float cgpa;

    printf("enter name: ");
    scanf("%s",&name);
    printf("enetr roll: ");
    scanf("%d",&roll);
    printf("enetr cgpa: ");
    scanf("%d",&cgpa);
    fprintf(fptr,"%s\n",name);
    fprintf(fptr,"%d\n",roll);
    fprintf(fptr,"%d\n",cgpa);
    return 0;
} 