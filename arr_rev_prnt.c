#include<stdio.h>
//Write a program in C to print the elements of an array in reverse order.
int main()
{
   int arr[100],i,size;
   printf("enter the size of array to be used: ");
   scanf("%d",&size);
   printf("enter the elements to the array:\n");
   for(i=0;i<size;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("\n");
   printf("the elemnts of the array in reverse order are:\n");
   for(i=size-1;i>=0;i--)
   {
      printf("%d\n",arr[i]);
   }
   return 0;
}