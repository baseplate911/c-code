#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,sum=0;
    printf("enter the number of term of fibonacci: ");
    scanf("%d",&n);
    printf("the fibonacci series is: ");
    printf("%d",a);
    printf("%d",b);
    for(i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d",sum);
    }
    return 0;
}