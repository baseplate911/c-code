#include<stdio.h>
int main()                 //odd number u=input in file.
{
    FILE *fptr;
    fptr=fopen("oddnum.txt","w");
    int n,i;
    printf("enter a integer: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            fprintf(fptr,"%d\n",i);
        }
    }
    return 0;
}