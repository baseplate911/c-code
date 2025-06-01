#include<stdio.h>
int stack[100],choice,i,size,x,top;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("ENTER THE SIZE OF THE STACK:");
    scanf("%d",&size);
    printf("STACK OPERATIONS\n");
    printf("______________\n");
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    do
    {
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
            push();
            break;
            }

            case 2:
            {
            pop();
            break;
            }

            case 3:
            {
            display();
            break;
            }

            case 4:
            {
            printf("EXIT POINT");
            break;
            }

            default:
            {
            printf("enter the valid input. choose one of the options from 1/2/3/4");
            }
        } 
    }
 while(choice!=4); 
 {
    return 0;
 }
}
void push()
{
    if(top>=size-1)
    {
        printf("STACK IS OVERFLOW\n");
    }
    else
    {
        printf("enter the element to be pushed\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("STACK IS UNDERFLOW\n");
    }
    else
    {
        printf("the element popped is %d\n",stack[top]);
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        printf("the element of the stack are:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
    else
    {
        printf("The STACK is empty.");
    }
}