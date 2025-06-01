#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("file.txt","a"); //opening file in append mode.
    fprintf(fptr,"%c",'C');     //appending character to file.
    fclose(fptr);
    fptr=fopen("file.txt","r");
    printf("content: %c\n",fgetc(fptr));  //first char.
    return 0;
    }