//lower to upper and without spaces
#include<stdio.h>
#include<string.h>
int main()
{
    char string[200],stringu[200],stringl[200];
    int i,j;
    printf("enter the string: ");
    fgets(string,200,stdin);

    printf("the string in upper character is:%s",strupr(string));

     for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==' ')
        {
            for(j=i;j<=strlen(string);j++)
            {
             string[j]=string[j+1];
            }
        }
    }
    printf("the string without spaces is %s",string); 
    return 0;
}