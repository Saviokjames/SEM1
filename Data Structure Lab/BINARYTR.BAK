#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left,*right;
};
struct node *root;
struct node* newnode(int x) {
	struct node *newnode =malloc(sizeof(struct node));
	newnode->data=x;
	newnode->left=newnode->right=NULL;
	return newnode;
}
struct node* insert(struct node *r,int x) {
	if(r==NULL) {
		return newnode(x);
	}
	else if(x==r->data) {
		printf("\nValue already present");
	}
	else if(x>r->data) {
		r->right=insert(r->right,x);
	}
	else if(x<r->data) {
		r->left=insert(r->left,x);
	}
	return r;
}
void inorder(struct node *r) {
	if(r==NULL)return;
	 {
		inorder(r->left);
		printf("%d-> ",r->data);
		inorder(r->right);
	}
}
struct node* search(struct node *r,int x) {
	if(r==NULL) {
		printf("\nNot found");
	}
	else if(r->data==x) {
		printf("\nFound");
	}
	else {
		if(r->data<x)
			return search(r->right,x);
		return search(r->left,x);
	}
	return 0;
}
struct node* minval(struct node *node) {
	struct node *current=node;
	while(current && current->left!=NULL)
		current=current->left;
	return current;
}
struct node* del(struct node *r,int x) {
	struct node *temp=minval(r->right);
	if(r==NULL)
		return r;
	if(x<r->data)
		r->left=del(r->left,x);
	else if(x>r->data)
		r->right=del(r->right,x);
	else {
		if(r->left==NULL) {
			struct node *ptr=r->right;
			free(root);
			return ptr;
		}
		else if(r->right==NULL) {
			struct node *ptr=r->left;
			free(root);
			return ptr;
		}

		r->data=temp->data;
		r->right=del(r->right,temp->data);
	}
	return r;
}
void main() {
	int x,c;
	clrscr();
	while(1) {
		printf("\n\n1:Create root node");
		printf("\n2:Insertion");
		printf("\n3:Deletion");
		printf("\n4:Inorder Traversal");
		printf("\n5:Search");
		printf("\n6:Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&c);
		switch(c) {
			case 1:printf("\nEnter the value : ");
			scanf("%d",&x);
			root=newnode(x);
			break;
			case 2:printf("\nEnter the value : ");
			scanf("%d",&x);
			root=insert(root,x);
			break;
			case 3:printf("\nEnter the value : ");
			scanf("%d",&x);
			del(root,x);
			break;
			case 4:inorder(root);
			break;
			case 5:printf("\nEnter the value : ");
			scanf("%d",&x);
			search(root,x);
			break;
			case 6:printf("\nPress any key to exit...");
			getch();
			exit(0);
			break;
			default:printf("\nInvalid choice");
		}
	}
}
