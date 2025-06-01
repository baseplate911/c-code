#include<stdio.h>
int main()
{
    int arr1[50],arr2[50],arr3[50],i,n;
    printf("enter the size of first array: ");
    scanf("%d",&n);
    printf("enter the elements of first array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the elements of second array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
    }
    printf("the new array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr3[i]);
    }
    return 0;
}