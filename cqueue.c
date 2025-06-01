#include <stdio.h> 
#include <stdlib.h>
int front = -1;
int rear = -1;
int size = -1;
int *circularQueue;
void enQueue(int element)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        printf("Queue is FULL");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == size - 1)
            rear = 0;
        else
            rear = rear + 1;
    }

    // In the end insert the element at the rear position
    circularQueue[rear] = element;
}

// Function to delete element from the circular queue
int deQueue()
{
    int currentElement;
    if (front == -1)
    {
        printf("Queue is Empty");
        return -1;
    }
    currentElement = circularQueue[front];
    circularQueue[front] = 0;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    // Else increase the front
    else
    {
        if (front == size - 1)
            front = 0;
        else
            front = front + 1;
    }

    return currentElement;
}
void display(int front, int rear)
{
    // Return if queue is empty
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    // Print the queue elements
    printf("Queue elements: ");
    if (front <= rear)
    {
        while (front <= rear)
        {
            printf("%d ", circularQueue[front]);
            front++;
        }
    }
    else
    {
        while (front <= size - 1)
        {
            printf("%d ", circularQueue[front]);
            front++;
        }
        front = 0;
        while (front <= rear)
        {
            printf("%d ", circularQueue[front]);
            front++;
        }
    }
    printf("\n");
}
int main()
{
    size = 6;
    circularQueue = (int *)malloc(sizeof(int) * size);

    info(front);
    info(rear);

    enQueue(8);
    info(front);
    info(rear);

    enQueue(5);
    info(front);
    info(rear);
    
    display(front, rear);

    enQueue(1);
    info(front);
    info(rear);

    enQueue(7);
    info(front);
    info(rear);

    display(front, rear);

    printf("Deleted Element: %d\n", deQueue());
    info(front);
    info(rear);

    printf("Deleted Element: %d\n", deQueue());
    info(front);
    info(rear);

    display(front, rear);
    return 0;
}