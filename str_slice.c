#include<stdio.h>
void slice(char word[],int a, int b);
void slice(char word[],int a, int b)
{
    char sliced[200];
    int i;
    for(i=0;i<=b-a;i++)
    {
        sliced[i]=word[i+a];
    }
printf("the sliced out string is:");
puts(sliced);
}
int main()
{
char word[200];
int a,b;
printf("enter your word here: ");
fgets(word,200,stdin);
printf("enter the starting index: ");
scanf("%d",&a);
printf("enter the ending index: ");
scanf("%d",&b);
slice(word,a,b);
return 0;
}