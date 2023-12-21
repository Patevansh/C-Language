#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnode(int data){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
void insertnode(struct node* tree,int data){
	if(tree->data==NULL){
		tree=newnode(data);
		return;
	}
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp=tree;
	for(int j=0;j<1;j--){
		if(temp->data>data){
			if(temp->left==NULL){
				break;
			}
			temp=temp->left;
		}
		else if(temp->data<data){
			if(temp->right==NULL){
				break;
			}
			temp=temp->right;
		}
		else(){
			printf("Value already exists.");
			return;
		}
	}
	if(temp->data>data){
		temp->left=*newnode(data)
	}
	else(){
		temp->right=*newnode(data);
	}
	
}
void searchnode(struct node* tree,int data){
	if(tree->data==NULL){
		printf("Tree is empty");
		return;
	}
	struct node* temp=tree;
	while(temp->left==NULL AND temp->right==NULL){
		if(temp->data>data){
			if(temp->left==NULL){
				printf("Data not found");
				return;
			}
			temp=temp->left;
		}
		else if(temp->data<data){
			if(temp->right==NULL){
				printf("data not found");
				return;
			}
			temp=temp->right;
		}
		else(){
			printf("Data found");
			return;
		}
	}
	if(temp->data>data){
		printf("Data not found");
	}
	else(){
		printf("Data not found");
	}
}
int main(){
	struct node* tree;
	int inp=0;
	int data;
	while(true){
		printf("1)input /n2)search /n3)exit");
		scanf("%d",&inp);
		switch(inp){
		case 1:
			printf("Enter value to insert:");
			scanf("%d",&data);
			insertnode(tree,data);
			break;
		case 2:
			printf("Enter the value to search:");
			scanf("%d",&data);
			searchnode(tree,data);
			break;
		case 3:
			return;
		case default:
			inp=0;
			printf("Wrong input")
	}
}
}
