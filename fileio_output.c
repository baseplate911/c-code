#include<stdio.h>
int main()    //print 5 integers from qn file
{
    FILE *fptr;    
    fptr=fopen("integer.txt","r");
    int ch;
    fscanf(fptr,"%d",&ch);
    printf("%d",ch);
    fscanf(fptr,"%d",&ch);
    printf("%d",ch);
    fscanf(fptr,"%d",&ch);
    printf("%d",ch);
    fscanf(fptr,"%d",&ch);
    printf("%d",ch);
    fscanf(fptr,"%d",&ch);
    printf("%d",ch);
    
    return 0;
}