#include<stdio.h>
void hello(int a);
void hello(int a)
{
    if(a==0)
    {
      return;
    }
    printf("hello guys\n");
    hello(a-1);   //calling function in the same function ....thats recusrion!!!
}
int main()
{
    hello(2);
    return 0;
}