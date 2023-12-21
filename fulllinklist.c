#include<stdio.h>
#include<Stdlib.h>
struct node{
	int data;
	struct node* next;
};
void insert(struct node **head,int val){
	struct node * newnode=NULL;
	struct node * last=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("out of memory");
	}
	newnode->data=val;
	newnode->next=NULL;
	if(*head==NULL){
		*head=newnode;
		return;
	}
	last=*head;
    while(last->next)
		last=last->next;
		last->next=newnode;
}
//void insert(struct node **head,int value)
//{
//    struct node * newnode=NULL;
//    struct node * last=NULL;
//    newnode=(struct node*)malloc(sizeof(struct node));
//    if(newnode==NULL)
//    {
//        printf("out of memeory");
//    }
//    newnode->data=value;
//    newnode->next=NULL;
//    if(*head==NULL)
//    {
//        *head=newnode;
//        return;
//    }
//    last=*head;
//    while (last->next) 
//        last = last->next;
//        last->next=newnode;
//}
void printlist(struct node *L){
	while(L){
		printf("%d ",L->data);
		L=L->next;
	}
}
//void printlist(struct node *head)
//{
//    printf("H->");
//    while(head)
//    {
//        printf("%d->",head->val);
//        head=head->next;
//    }
//    printf(".....");
//}
int main(){
	int count=0;
	int i=0;
	int ele;
	struct node* head=NULL;
	printf("Enter number of elements:");
	scanf("%d",&count);
	for(i=0;i<count;i++){
		printf("Enter %d element:",i+1);
		scanf("%d",&ele);
		insert(&head,ele);
	}
	printf("Linklist element:");
	printlist(head);
}
