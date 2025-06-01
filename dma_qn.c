#include<stdio.h>
#include<stdlib.h>
int main()     //creating a dynamic  memory with size of n and n is entered by the user.
{
    int n,*ptr;
    printf("enter a number: ");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }

    free(ptr);   //here we freed the ptr and then reassigned it here
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}