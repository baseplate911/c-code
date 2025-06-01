#include<stdio.h>
int fact(int n);
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    return fact(n-1)*n;
}
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("the factorial of %d is %d",a,fact(a));
    return 0;
}