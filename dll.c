#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
int main()
{
    struct node*node1,*node2;
    node1=(struct node*)malloc(sizeof(struct node));
    node2=(struct node*)malloc(sizeof(struct node));
    node1->data=1;
    node2->data=2;
    node1->next=node2;
    node2->prev=node1;
    node2->next=NULL;
    node1->prev=NULL;
    printf("%d\n%d",node1->data,node2->data);
}