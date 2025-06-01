#include<stdio.h>
int main()
{
    int a,i,rem,rev=0,temp;
    printf("enter the number: ");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(temp==rev)
    {
    printf("%d is a palindrome",temp);
    }
    else{
        printf("%d is not a palindrome",temp);
    }
    return 0;
}