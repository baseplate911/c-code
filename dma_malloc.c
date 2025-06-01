#include<stdio.h>
#include<stdlib.h>      //malloc function
int main()
{
    int *ptr;
    ptr=malloc(5*sizeof(int));
    //ptr[0]=1; //this is not initialized so it will give GRABAGE value
    ptr[1]=6;
    ptr[2]=8;
    ptr[3]=9;
    ptr[4]=4;
    for(int i=0;i<=4;i++)
    {
        printf("%d\n",ptr[i]);
    }
}