#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("file.txt","r");   //file open.
    char ch;
    fscanf(file,"%c",&ch);        //file content store in ch
    printf("character: %c\n",ch);  //ch is printed here. (will print character by character) 
    fclose(file);                  //if number then 123 is taken as one character
    return 0;
}