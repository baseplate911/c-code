#include<stdio.h>
#include<stdlib.h>               //** return void pointer,each index initialize at 0.
int main()
{
    int *ptr;
    ptr=(int*)calloc(6,sizeof(int));
    for(int i=0;i<=5;i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;

}