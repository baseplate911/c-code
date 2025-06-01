//my own power function
#include<stdio.h>
#include<math.h>
int pwr();
int pwr(int a, int b)
{
   int i,prd=1;
  for(i=1;i<=b;i++)
  {
    prd=prd*a;

  }
  return prd;
}
int main()
{
    int a,b;
    printf("enter the base number and then the exponent number: ");
    scanf("%d%d",&a,&b);
    printf("the %d to power %d is %d",a,b,pwr(a,b));

return 0;
}
