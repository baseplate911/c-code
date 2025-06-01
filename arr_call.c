#include<stdio.h>
int call(int array[100],int size); //declairing the function named "call"
int call(int array[100],int size) //defining the function named "call"
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
}
int main()
{
    int array[100],i,size;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    printf("enter element to the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    call(array,size); //calling the function named "call".

}