#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("file.txt","r");
    printf("characters: %c\n",fgetc(fptr));  //use of GETC function instead of fscanf.
    fclose(fptr);
    fptr=fopen("file.txt","w");
    fputc('g',fptr);    //use of PUTC function
    fclose(fptr);
    return 0;
    }