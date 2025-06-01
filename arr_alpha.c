//Write a program in C to print all the letters in english alphabet using a pointer
#include<stdio.h>
int main()
{
    int i;
    for(i=65;i<=90;i++)  //this loop is for capital letters.
    {
    printf("%c\n",i);
    }
    printf("    \n");
    for(i=97;i<=122;i++) //this loop is for small leterrs.
    {
    printf("%c\n",i);
    }
    return 0;
}