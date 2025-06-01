#include<stdio.h>
int swap(int *a,int *b);
int swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("the new value of first and second are %d and %d",*a,*b);
}
int main()
{
    int num1,num2;
    printf("enter first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    int *loc1= &num1,*loc2= &num2;
    swap(loc1,loc2); //this is call by refernce as we are using the pointer/address instead of the value.
    return 0;
}
