#include<stdio.h>  //this topic is cleared.
#include<stdlib.h>
int main()
{
    int *ptr,i;
    ptr=calloc(5,sizeof(int)); //initialized at zero
    for(i=0;i<6;i++)
    {
        printf("%d\n",ptr[i]);
    }
    printf("next");
    ptr=realloc(ptr,3); 
    for(i=0;i<3;i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}