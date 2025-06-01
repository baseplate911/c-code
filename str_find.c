#include<stdio.h>
#include<string.h>
int main()
{
    char let,string[200];
    int i,know=0;
    printf("enter the string here: ");
    fgets(string,200,stdin);
    printf("enter the character to be find: ");
    scanf("%c",&let);
    for(i=0;i<=strlen(string);i++)
    {
        if(string[i]==let)
        {
            know=know+1;
            break;
        }
        else
        {
            know=know+0;
        }
    }
    if(know==0)
    {
       printf("the given charcter %c is not present in the string.",let); 
    }
    else
    {
         printf("the given character %c is present in the string.",let);
    }
    return 0;
}