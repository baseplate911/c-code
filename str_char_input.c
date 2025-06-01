#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    char a;
    int i;
    for(i=0;a!='\n';i++)
    {
        scanf("%c",&a);
        name[i]=a;
    }
    name[i]='\0';
    puts(name);
    return 0;
}
////incomplete