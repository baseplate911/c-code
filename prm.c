#include<stdio.h>
int main()
{
    int n,i,know=0;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n==2)
    {
        printf("%d is a prime number",n);
    }
    else
    {
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            know=1;
        }
        else
        {
        know=0;
        }
    }
        if(know==0)
        {
            printf("%d is a prime number",n);
        }
        else
        {
            printf("%d is not a prime number",n);
        }
    }
 return 0;
}