
#include<stdio.h>
#include<math.h>
float sqart(float num);

float sqart(float num)

{

return pow(num,0.5);

}

int main()

{

float num1;

printf("Please Enter a Number:");

scanf("%f",&num1);

printf("The square root of %f is %f",num1,sqart(num1));

return 0;

}
