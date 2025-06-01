/* OBJECTIVE : AN ARRAY OF 21 INTEGERS IS GIVEN .THE RANGE OF ELEMENTS IS 101-
200 DISPLAY THE LIST OF NUMBERS WITH THEIR POSITIONS INDEX
FIND THE SUM OF ALL NO. IN GIVEN ARRAY . SEARCH THE ELEMENT 105 STORED BY THE
USER OR NOT*/
#include<stdio.h>
int main()
{
    int array[21],i,temp=0,sum=0,know=0; //declaring array
printf("enter 21 element in the array from 101 to 200:\n");  
for(i=0;i<21;i++)                         //entering element to the array   
{
    scanf("%d",&temp);
    if(temp>=101 && temp<=200)            //cehcking if entered number is from 101 to 200 or not
    {
        array[i]=temp;
    }
    else
    {
        printf("Enter numbers only from 101 to 200:\n");
    }
}
for(i=0;i<21;i++)
{
    printf("%d at index %d\n",array[i],i);      //printing the element and their index of all the element in the array
    sum=sum+array[i];                           //sum of all the elements in the array
}
printf("The sum of all the numbers in the array is %d\n",sum);
int find=105;          //element to be find
for(i=0;i<21;i++)    
{
    if(array[i]==find)        //using linear search
    {
        printf("element 105 found at index %d\n",i);   //element found
        know=know+1;
    }
}
if(know==0)
    {
        printf("element 105 is not in the array\n");     //element not found
    }
    printf("NAME:- AKASH PATEL\nSAP ID:-1000018233");
return 0;
}