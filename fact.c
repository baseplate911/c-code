#include<stdio.h>
int main()
{
    int num1,i,fact=1;
    printf("enter the number: ");
    scanf("%d",&num1);
    for(i=1;i<=num1;i++)
    {
        fact=fact*i;
    }
    printf("the factorial of %d is %d",num1,fact);
    return 0;
}