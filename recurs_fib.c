#include<stdio.h>
int fibn(int a);
int fibn(int a)
{
    if(a==2)
    {
        return 1;
    }
    else if(a==1)
    {
        return 0;
    }
    return fibn(a-1)+fibn(a-2);
}
int main()
{
    int a;
    printf("enter the term of fibonacci sequence: ");
    scanf("%d",&a);
    printf("the %dth term of fiboancci is %d:",a,fibn(a));
    return 0;
}