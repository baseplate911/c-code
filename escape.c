#include<stdio.h>
#include<conio.h>
int main()
{
   int k;
    k =getch();
    if(k==0 || k==224) k=getch();
    if(k==27)  
    {
        return 0;
    }
    else if(k==105)
    {
        printf("I"); 
    }
    else if(k==77)
    {
        printf("right");
    }
    else if(k==75)
    {
        printf("left");
    }
    else if(k==72)
    {
        printf("up");
    }
    else 
    {
        printf("down");
    }
   return 0;
}