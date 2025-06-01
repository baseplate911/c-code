#include<stdio.h>
int main()
{
    int n,i,sum=0;
    int arr[10];
    printf("enter the size of the array"); //here user will give us the size of array upto where operation will
    scanf("%d",&n);                        //occur.
    for(i=0;i<n;i++)                      //here we are taking input from the user.
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)                     //this loop is for print the content of the array.
    {
        printf("%d",arr[i]);
    }
    for(i=0;i<n;i++)                   //this loop is for the sum of the contents of the array.
    {
        sum=sum+arr[i];
    }
    int avg;
    avg=sum/n;
    printf("\nthe addition and average of each element of array is %d and %d",sum,avg);
    return 0;
}
