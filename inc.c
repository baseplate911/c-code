#include<stdio.h>
int main()
{
int i,j;
 i = 1;
 j = ++i; //first increment and then assisgnment. pre increment
 printf("i=%d and j=%d\n",i,j);
 int a,b;
 a=1;
 b=a++; //first assignment and then increment. post increment
 printf("a=%d and b=%d",a,b);
 return 0;
}
