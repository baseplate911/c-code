#include<stdio.h>
int main()
{
    int fibn[100],i,number;
    printf("enter the number of fibonacci terms to be printed: ");
    scanf("%d",&number);
    fibn[0]=0;
    fibn[1]=1;
    for(i=2;i<number;i++)
    {
        fibn[i]=fibn[i-1]+fibn[i-2];
    }
    for(i=0;i<number;i++)
    {
        printf("%d\n",fibn[i]);
    }
    return 0;
}