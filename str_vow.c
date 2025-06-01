#include<stdio.h>
#include<string.h>
int main()
{
char name[50];
int i,vow=0,cons=0;
printf("enter string here: ");
gets(name);
for(i=0;i<strlen(name);i++)
{
    if(name[i]=='a' || name[i]=='e' || name[i]=='o' || name[i]=='i' || name[i]=='u')
    {
        vow=vow+1;
    }
    else
    {
    if(name[i]>'a' && name[i]<'z')
    {
        cons=cons+1;
    }
    }
}
printf("there are %d vowels and %d consonants in the given string",vow,cons);
return 0;
}