#include<stdio.h>
void swap(int *a,int *b);
void swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("the reversed value of first and second number is %d and %d",*a,*b);
}
int main()
{
    int num1,num2;
    printf("enter first number:\n");
    scanf("%d",&num1);
    printf("enter second number:\n");
    scanf("%d",&num2);
    swap(&num1,&num2);
    return 0;
} 