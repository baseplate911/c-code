#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("string.txt","r");
    char ch;
    ch=fgetc(ptr);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(ptr);
    }
    return 0;
}