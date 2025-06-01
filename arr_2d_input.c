#include<stdio.h>
int main()
{
    int arr[2][10],i,j,k;
    for(i=0;i<1;i++)
    {
        for(j=0;j<10;j++)
        {
            arr[i][j]=2*(j+1);
        }            
    }
    for(i=1;i<2;i++)
    {
        for(j=0;j<10;j++)
        {
            arr[i][j]=3*(j+1);
        }            
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d\n",arr[i][j]);
        }
    }
    return 0;
}