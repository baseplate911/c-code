#include<stdio.h>
int main()
{
    //code for binary search.
    int array[100],i,size,find,low,high,mid=0,know=0;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    printf("enter the elements to the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the element to find: ");
    scanf("%d",&find);
    low=0;
    high=size-1;
    while(low<=high)   //the location and the condition of this loop is the most important.
    {
    mid=(low+high)/2;
    if(array[mid]>find)
    {
        high=mid-1;
    }
    else if(array[mid]<find)
    {
        low=mid+1;
    }
    else
    {
        printf("element found at index %d",mid);
        know=know+1;
        break;
    }
    }
    if(know==0)
    {
        printf("element does not exist in the array.");
    }
}