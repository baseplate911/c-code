#include<stdio.h>    //two number in a file replaced by their sum.
int main()
{
    FILE *fptr;
    fptr=fopen("number.txt","r");
    int n,p;
    fscanf(fptr,"%d\n",&n);
    printf("%d\n",n);
    fscanf(fptr,"%d\n",&p);
    printf("%d\n",p);
    fclose(fptr);
    fptr=fopen("number.txt","w");
    fprintf(fptr,"The sum of %d and %d is: %d",p,n,p+n);
}