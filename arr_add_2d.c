#include<stdio.h>
int main()
{
  int r,c,arr1[10][10],i,j,arr2[10][10],arr3[10][10];
  printf("enter the number of row:");
  scanf("%d",&r);
  printf("enter the number of column:");
  scanf("%d",&c);
  printf("enter the value of first array:");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&arr1[i][j]);
    }
  }
  printf("enter the value of second array");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&arr2[i][j]);
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      arr3[i][j]=arr2[i][j]+arr1[i][j];
    }
  }
  printf("the array after addition is:\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d",arr3[i][j]);
    }
  }
  return 0;
}