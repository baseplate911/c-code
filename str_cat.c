#include <stdio.h>
#include <string.h>
int main()
{
    char firstname[300],lastname[100];
    printf("enter your first name: ");
    scanf("%s",&firstname);
    printf("enter your last name: ");
    scanf("%s",&lastname);
    strcat(firstname,lastname);
    printf("the name after conatenation is %s",firstname);
    return 0;
}