#include<stdio.h>
int sum(int a,int b);  //function prototype.
int sum(int a,int b)   //function definition.
{
    return a+b;

}
int main()
{
int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("the sum of %d and %d is %d",a,b,sum(a,b)); //function call.
    return 0;
}