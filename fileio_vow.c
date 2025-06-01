#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("string.txt","r");
    char ch;
    int vow=0;
    ch=fgetc(fptr);
    while(ch!=EOF)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            vow=vow+1;
        }
        ch=fgetc(fptr);
    }
    fclose(fptr);
    fptr=fopen("string.txt","w");
    fprintf(fptr,"%d",vow);
    fclose(fptr);
    return 0;
    }