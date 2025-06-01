#include<stdio.h>
int main()
{
    int a=5;
    int b=~a;
    int c=-(a+1);
    if(b==c)
    {
        printf("got it!");
    }
    else{
        printf("faaah");
    }
}
