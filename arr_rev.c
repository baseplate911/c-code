#include<stdio.h>
int main()
{
    int arr[100],size,i;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    printf("enter the elements to the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=size/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-i-1]=temp;
    }
    printf("the array in reverse order is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
} 