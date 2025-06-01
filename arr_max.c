#include<stdio.h>
int main()
{
    int arr[50];
    int i,n,j=i+1,max=0,min=0;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements to the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0],min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    } 
    printf("the max and min is %d and %d",max,min); 
    return 0;
}