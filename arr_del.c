#include<stdio.h>
int main()
{
int arr[50],size,i,n;
printf("enter the size of array: ");
scanf("%d",&size);
printf("enter the elements: ");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the index of element to be deleted: ");
scanf("%d",&n);
for(i=n;i<size-1;i++)
{
arr[i]=arr[i+1];
}
for(i=0;i<size-1;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}