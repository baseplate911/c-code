/*1.Write a Cprogram to find the roots of Quadraticequation using switch statement*/

#include<stdio.h>
#include<math.h>
int main()
{   char i;
    int a,b,c,n;
    printf("enter the value of a,b and c:\n");
    scanf("%ld%ld%ld",&a,&b,&c);
    int D=b*b-4*a*c;
    float rl_prt=0;
    float img_prt=0;
    rl_prt= -b/a ;
    img_prt=sqrt(-D)/(2*a);
    
    switch(D==0)
    {
    case 1: 
    printf("both roots are equal: %d",-b/(2*a));
    break;
    case 0:
    switch(D>0)
    {
        case 1:
        printf("the roots are %f and %f",(-b-sqrt(D))/(2*a),(-b+sqrt(D))/(2*a));
        break;
        
        
        case 0:
        printf("the roots are %lf+%lfi and %lf-%lfi",rl_prt,img_prt,rl_prt,img_prt);
        break;
    }
    break;
    }
    
 return 0;
}




