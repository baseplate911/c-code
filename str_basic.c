#include<stdio.h>
int main()
{
    char name[50];
    //<<<<<<<<<---------chomu method.
    /*printf("enter your name here:\n");
    scanf("%s",name);
    printf("your name is %s"); */

    // gets(name); //********dont use this trash.
    fgets(name,100,stdin);   //******use me that is fgets far better than gets.
    puts(name);    //**** and for the output.
    return 0;
}