#include<stdio.h>
int main()
{
    int a,b,i,know=1,num1=0,num2=0;
    printf("enter two numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    int range=a;
    if(a>b)
    {
        range=b;
    }
    for (i=2;i<=range;i++)   //only because of this line you have two enter the first number larger than the other one.
    {                   //i can fix this but the code would be approx double so.... :)
        if(a%i==0 && b%i==0 && i>know)
        {
            know=i;
        }
    }
    num1=a/know;
    num2=b/know;
    printf("the LCM is %d\n",know*num1*num2);
    printf("the HCF is %d",know);
    return 0;
}