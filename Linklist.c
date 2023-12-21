#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head;
    struct node *node1 = NULL;
    struct node *node2 = NULL;
    struct node *node3 = NULL;
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));
    node1->data = 10;
    node2->data = 20;
    node3->data = 30;
    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    struct node* p=head;
    while (p!=NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
}
