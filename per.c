#include<stdio.h>
int main() //perfect number program
{
  int num,i,per=0;
  printf("enter a number");
  scanf("%d",&num);
 for(i=1;i<=num/2;i++)
 {
    if(num%i==0 && num!=i)
    {
      per=per+i;
    }
 }
  if(per==num)
  {
    printf("%d is a perfect number",num);
  }
  else{
    printf("%d is not a perfect number",num);
  }
}