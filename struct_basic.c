#include<stdio.h>
#include<string.h>

int main()
{
    struct cars{    //declaration of the structure.
    char name[200];
    float price;
    int num_sold;
 };
    struct cars pagani;    //defintion of the structure, this type is a bit complicated
    strcpy(pagani.name,"pagani A1");      
    pagani.price=85;  
    pagani.num_sold=110;
    printf("the number of pagani sold is %d\n",pagani.num_sold);
    printf("the cost of pagani is %f lakh\n",pagani.price);
    printf("the name of the model of the pagani %s\n",pagani.name);

    struct cars audi={"audi",65,100};    //***second type of declaration this type of declaration is prefered
    printf("the name of the cars is %s and the price is %d and the number sold is %f",audi.name,audi.num_sold,audi.price);
    return 0;
}