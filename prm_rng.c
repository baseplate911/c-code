#include<stdio.h>
int main()
{
    int i,l,u,j,know=0;
    printf("enter the range, FROM: ");
    scanf("%d",&l);
    printf("enter the range, TO: ");
    scanf("%d",&u);
    for(i=l;i<=u;i++)
    {
        if(i==2)
        {
            printf("%d is a prime number\n",i);
        }
        else if(i==3)
        {
            printf("%d is a prime number\n",i);
        }
        else if(i==1)
        {
            continue;
        }
        else
        {
        for(j=2;j<=i/2;j++)
         
        {
            if(i%j==0)
            {

                know=1;
                break;
            }
            else
            {
               know=0;
            } 
        }
        if(know==0)
        {
            printf("%d is a prime number\n",i);
        }
        }
    }
 return 0;
}