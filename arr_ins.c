#include<stdio.h>
int main()
{
    int arr[50],a,i,size;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    printf("enter the elements to the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the index at which element is to be inserted: ");
    scanf("%d",&a);
    for(i=size;i>=a;i--)
    {
            arr[i]=arr[i-1];
    }
    printf("enter the element to be inserted: ");
    scanf("%d",&arr[a]);
    for(i=0;i<size+1;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}