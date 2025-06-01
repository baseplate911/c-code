#include <stdio.h>
#include <string.h>
int main()
{
    char firstname[300],lastname[100],copied_string[100];
    printf("enter your first name: ");
    scanf("%s",&firstname);
    printf("enter your last name: ");
    scanf("%s",&lastname);
    strcat(firstname,lastname);
    printf("the name after concatenation is %s\n",firstname);
    strcpy(copied_string,firstname);
    printf("the copied string is %s\n",copied_string);
    printf("the length of the string is %d\n",strlen(copied_string));
    printf("the string in upper case is: %s",strupr(copied_string));
    return 0;
}