//Write a program in C to find the maximum number between two numbers using a pointer
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers here:\n");
    scanf("%d %d",&a,&b);
    int *ptr1=&a, *ptr2=&b;
    if(*ptr1<*ptr2)
    {
        printf("%d is greater than %d",*ptr2,*ptr1);
    }
    else
    {
         printf("%d is greater than %d",*ptr1,*ptr2);
    }
    return 0;
}