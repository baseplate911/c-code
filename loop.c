#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=6-i;j>=1;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}