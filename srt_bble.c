#include<stdio.h>
int main()
{
    int arr[50],i,n,j,temp;
    printf("enter the size of the array to be used: ");
    scanf("%d",&n);
    printf("enter the elements to the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("  \n\n");
    printf("the array in the sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}