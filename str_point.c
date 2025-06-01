#include<stdio.h>
int main()
{
    char *name="akash patel";
    puts(name);
    int i,sum=0;
    for(i=0;name[i]!='\0';i++) //this loop is for the lenght of the string
    {
        sum=sum+1;
    }
    printf("the size of the array is:%d",sum);
}