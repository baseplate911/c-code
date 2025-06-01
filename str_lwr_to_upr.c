#include<stdio.h>
#include<ctype.h>  //very important header file.
int main()
{
    int i;
    char string[200];
    printf("enter the string here: ");
    fgets(string,200,stdin);
    for(i=0;string[i]!='\0';i++)
    {
        if(isupper(string[i]))
        {
            string[i]=tolower(string[i]);
        }
        else if(islower(string[i]))
        {
            string[i]=toupper(string[i]);
        }
    }
    printf("The new string is %s",string);
    return 0;
}