#include<stdio.h>
int main()
{
    int num,last_dig,rem,left_dig,sum=0;
    printf("enter a number: ");
    scanf("%d",&num);
    last_dig=num%10;
    left_dig=num/10;
    while(left_dig>0)
    {
        rem=left_dig%10;
        sum=sum+rem;
        left_dig=left_dig/10;
    }
    if(sum==last_dig)
    {
        printf("%d is a handsome number",num);
    }
    else
    {
        printf("%d is not a  handsome number",num);
    }
    return 0;
}
