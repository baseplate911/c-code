#include<stdio.h>
#include<string.h>
int main()
{
    char passw[100],salt[]="123",newpass[200];
    printf("enter your password here: ");
    scanf("%s",passw);
    strcat(passw,salt);
    strcat(newpass,passw);
    printf("the salted password is: %s",passw);
    return 0;
}