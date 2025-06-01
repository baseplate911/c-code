#include<stdio.h>
int main()
{
    //the prdouct of all the element entered to the array.
    int element[100],i,size;
    printf("enter the size of the array:\n");
    scanf("%d",&size);
    printf("enetr the element to the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&element[i]);
    }
    int prd=1;
    for(i=0;i<size;i++)
    {
        prd=prd*element[i];
    }
    printf("the prdocut of all the elements of the array is %d",prd);
    return 0;
}