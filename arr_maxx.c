#include<stdio.h>   //this program gives you the highest element form the array with help of a function.
int arraymax(int array[100],int size);
int arraymax(int array[100],int size)
{
    int max=0,i;
    for(i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("the maximum number is %d",max);
}
int main()
{
    int array[100],i,size;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    printf("enter the element in the  array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    arraymax(array,size);
}