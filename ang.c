#include<stdio.h>
int main()
{
    int a,i,temp,rem,num=0;
    printf("enter the value of the number: ");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        rem=a%10;
        num=num+rem*rem*rem;
        a=a/10;
    }
    if(num==temp)
    {
        printf("%d is a armstrong number",temp);
    }
    else
    {
        printf("%d is not a armstrong",temp);
    }
    return 0;
}