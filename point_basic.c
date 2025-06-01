#include<stdio.h>
int main()
{
    int a;
    a=10;
    int *adres=&a;
    int value_adres= *adres;
    printf("%d\n",a);   //value of the a .
    printf("%d\n",adres); //address of variable a stored in pointer adres.
    printf("%d\n",&a); //it will print the address in integer form.
    printf("%p\n",&a); //it will print the adress in hexadecimal and pointer form.
    printf("%u\n",&a); //it will print the address in unsigned integer form. **USE THIS!!!
    printf("%d\n",value_adres); //value at address of a.
    int **pptr=&adres;
    printf("%u\n",pptr); //address of the pointer or pointer to pointer.
    *adres=5;   
    printf("%d\n",*(&a)); //can also use this form/
    printf("%d\n",*adres); // value of a changed at address of a.
    printf("%d\n",a); //changed value of a.
    return 0;
}