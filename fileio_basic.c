#include<stdio.h> 
int main()
{
    FILE *fptr;
    fptr=fopen("file.txt","r");     //open and close file.
    fclose(fptr);
    fptr=fopen("newtext","r");     //check if a file exist or not.
    if(fptr==NULL)
    {
        printf("file dosen't exist.");
    }
    else
    fclose(fptr);
    return 0;
}