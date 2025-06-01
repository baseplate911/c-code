#include<stdio.h>
int main()
{
    int arr[50],i,n;
    printf("enetr the size of array: ");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("\nthe even numbers is %d",arr[i]);
        }  
    }
    return 0;
}