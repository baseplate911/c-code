#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        num=num/10;
        count=count+1;
    }
    printf("the number of digit in the given number is %d",count);
}