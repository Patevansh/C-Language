#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* Newnode(int data){
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
}
void post(struct node* tree){
	if(tree==NULL){
		return;
	}
	post(tree->left);
	post(tree->right);
	printf("%d ",tree->data);
}
void infix(struct node* tree){
	if(tree==NULL){
		return;
	}
	infix(tree->left);
	printf("%d ",tree->data);
	infix(tree->right);
}
void pre(struct node* tree){
	if(tree==NULL){
		return;
	}
	printf("%d ",tree->data);
	pre(tree->left);
	pre(tree->right);
}
int main(){
	struct node* Tree=Newnode(1);
	Tree->left=Newnode(2);
	Tree->right=Newnode(3);
	Tree->left->left=Newnode(4);
	Tree->left->right=Newnode(5);
	printf("postorder=");
	post(Tree);
	printf("\nInorder=");
	infix(Tree);
	printf("\nPreorder=");
	pre(Tree);
}
