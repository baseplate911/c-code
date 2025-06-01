#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("file.txt","w");  //opening file in write mode.
    fprintf(fptr,"%c",'A');      //what to write in file.
    fclose(fptr);                //close the file.
    fptr=fopen("file.txt","r");  //open the file again in read mode.
    char ch;
    fscanf(fptr,"%c",&ch);       //storing the character in ch.
    printf("%c",ch);             //printing the character stored in ch.
    return 0; 
}