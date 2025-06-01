#include<stdio.h>
#include<string.h>
struct veh
    {
        char name[100];
        int price;
        float sold;
    };

void printinfo(struct veh v1);
void printinfo(struct veh v1)
{
    printf("the name of the car is %s and the price and number sold is %f,%d",v1.name,v1.price,v1.sold);
}
int main()
{
    
    struct veh v1={"SUPRA",200,1};//this is the most important.
    printf("the details of the car v1 are:\n");
    printinfo(v1);   
    return 0;
}