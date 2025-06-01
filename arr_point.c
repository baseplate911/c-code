#include<stdio.h>
void jio(int *arr,int n);  //can use *arr instead of arr[] , can use array as argument in functions
void jio(int *arr,int n)   //array is a pointer
{
    int i; 
    for(i=0;i<n;i++)
    {
        printf("%dth index elemnt is %d\n",i,arr[i]);
    }
}

int main()
{
    int arr[]={1,2,3,4},i;
    jio(arr,4);
    return 0;
}
