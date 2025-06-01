//Write a C program that finds all perfect square odd numbers (like 625) between 100 to 900.
#include<stdio.h>
#include<math.h>
int main()
{
    printf("The odd perfect square numbers between 100 and 900 are: \n");
    int i=0,num=0;
    for(i=100;i<=900;i++)  //this loop is for iteration
    {
        if(i%2!=0) //this loop is for checking if the number is odd or not.
        {
            num=sqrt(i);   //here we are calculating the aquare root of the number.
            if(num*num==i) //if the number is eqal to its square roots square.
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}