#include<stdio.h>
int chng(int a);
int chng(int a)
{
    int sum=0;
    sum=5+a;
    return sum;
}
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("the original number is %d\n",num);
    chng(num);
    printf("number when we call function by value is %d",num);
    return 0;
}