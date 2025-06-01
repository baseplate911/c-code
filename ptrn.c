#include<stdio.h>
#include<math.h>
int main()
{
    int row,bspace,aspace,star,n;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(bspace=1;bspace<=n-row;bspace++)
        {
            printf(" ");
        }
        for(star=1;star<=2*row-1;star++)
        {
            printf("*");
        }
        for(aspace=1;aspace<=n-row;aspace++) //this for loop is unnecessary
        {
            printf(" ");
        }
       printf("\n");
    }

}
