//linear search in an array.
#include<stdio.h>
int main()
{
    int array[50],i,size,find,know=0;
    printf("enter the size of the array ");
    scanf("%d",&size);
    printf("enter the elements of array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the elemnt to be find: ");
    scanf("%d",&find);
    for(i=0;i<size;i++)
    {
        if(array[i]==find)
        {
            printf("element found at index %d",i);
            know=know+1;
        }
    }
    if(know==0)
    {
        printf("the element is not found in the array");
    }
    return 0;
}