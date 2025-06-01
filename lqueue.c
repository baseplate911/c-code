#include<stdio.h>
void insert();
void delete();
void display();
int queue[100],choice,size,rear=-1,front=-1,x;
int main()
{
    printf("QUEUE USING ARRAY\n");
    printf("1.insert\n2.delete\n3.display\n4.exit\n");
    printf("enter the size of the array to be used\n");
    scanf("%d",&size);
    while(1)
    {
    printf("enter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
        insert();
        break;
        }

        case 2:
        {
        delete();
        break;
        }

        case 3:
        {
        display();
        break;
        }

        case 4:
        {
        printf("QUEUE EXIT");
        }
        default:
        printf("enter a valid choice from 1/2/3/4\n");
    }
    }
}
void insert()
{
    if(rear==size-1)
    {
        printf("QUEUE OVERFLOW\n");
    }
    else
    {
        if(front==-1)
        front=0;
        printf("insert the element in the queue\n");
        scanf("%d",&x);
        rear=rear+1;
        queue[rear]=x;
    }
}
void delete()
{
    if(front==-1)
    {
        printf("QUEUE UNDERFLOW\n");
    }
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            printf("The element deleted from the queue is %d\n",queue[front]);
            front=front+1;
        }
}
void display()
{
    if(front==-1)
    {
        printf("the queue is empty\n");
    }
    else
    {
        int i;
        printf("the element of the queue are\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
