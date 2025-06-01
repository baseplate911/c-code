//In an array of numbers, find how many times does a number 'x' occurs.
#include<stdio.h>
int main()
{
    int number[100],i,size;
    printf("enter the szie of array to be used: ");
    scanf("%d",&size);
    printf("enter the elemnts to the array:\n");
    for(i=0;i<size;i++)
    {
    scanf("%d",&number[i]);
    }
    int num,sum=0;
    printf("enter a number to find: ");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(number[i]==num)
        {
            sum=sum+1;
        }
    }
    printf("%d occurs for %d times in the array: ",num,sum);
    return 0;
}