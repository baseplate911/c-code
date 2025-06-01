#include<stdio.h>
int main()
{
    int cs_id,unit,bill,rl_bill=0;
    printf("enter the customer ID: ");
    scanf("%d",&cs_id);
    printf("enter the unit consumed: ");
    scanf("%d",&unit);
    if(unit<=199)
    {
        bill=unit*8.1;
    }
    else if(unit>=200 && unit<400)
    {
        bill=unit*9.2;
    }
    else if(unit>=400 && unit<600)
    {
        bill=unit*9.5;
    }
    else if(unit>=600)
    {
        bill=unit*10;
    }
    else
    {
    printf("enter a valid unit");
    }
    rl_bill=bill;
    if(bill>600)
    {
        bill=bill+(15*bill)/100;
    printf("total bill is %d",bill);
    }
    else if(bill<100)
    {
        printf("the minimum bill should be 100");
    }
    else{
        printf("the total bill is %d",rl_bill);
    }
    return 0;
}