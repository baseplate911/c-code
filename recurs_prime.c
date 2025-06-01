#include<stdio.h>
int stat=0;
int prime(int a);
int prime(int a)
{
    int i;
    if(a==2)
    {
        printf("%d is a prime number ",a);
    }
    else
        for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            stat=1;
            break;
        }
        else{
            stat=0;
        }
    }
    
}
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    prime(num);
    if(stat==0)
    {
        printf("%d is a prime number: ",num);
    }
    else
    {
        printf("%d is not a prime number: ",num);
    }
    return 0;
}