#include<stdio.h>
#include<conio.h>
int choice,item;
void insbegin();
void insend();
void inspos();
void delend();
void delbegin();
void delpos();
void disp();
void search();

struct node
{
int data;
struct node *next;
};
struct node *start=NULL;

void main()
{
clrscr();
 do
{
printf("\n----------\nOPERATIONS\n----------\n1.insert at begining   \n2.insert at end    \n3.insert at a position   \n4.delete from begin \n5.delete from end\n6.delete from a position\n7.display\n8.search item\n9.exit  \n");

printf("\nENTER CHOICE");
scanf("%d",&choice);
 switch(choice)
{
 case 1:
 {
 insbegin();
 break;
 }
 case 2:
 {
 insend();
 break;
 }
 case 3:
 {
 inspos();
 break;
 }
 case 4:
 {
 delbegin();
 break;
 }
 case 5:
 {
 delend();
 break;
 }
 case 6:
 {
 delpos();
 break;
 }
  case 7:
 {
 disp();
 break;
 }
 case 8:
 {
 search();
 break;
 }
 case 9:
 {
 printf("exit pls");
 break;
 }
 default:
 {
 printf("INVALID CHOICE") ;
 }
}
}
while(choice!=9);
getch();
}                //main fn end


void insbegin()
{
	struct node *ptr;
	int x;
	ptr=(struct node *)malloc(sizeof(struct node));
	if (ptr==NULL)
	{
	printf("\n out of memory");
	}
	else
	{
	 printf("\n Enter data to insert :  ")  ;
	scanf("%d",&x);
	if(start==NULL)
	{
	ptr->data=x;
	ptr->next=NULL;
	start=ptr;
	}
	else
	{
	ptr->data=x;
	ptr->next=start;
	start=ptr;
	}
	 }
}
 //void insert end

void insend()
{
	struct node*ptr,*temp;
	int x;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
	printf("overflow");
	}
	else
	{
	printf("/n enter value: ");
	scanf("%d",&x);
	ptr->data=x;
	if(start==NULL)
	{
	ptr->next=NULL;
	start=ptr;
	}
	else
	{
	temp=start;
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	temp->next=ptr;
	ptr->next=NULL;
	}
	}
}

void inspos()
{
	int pos,i,x;
	struct node*ptr,*temp;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
	printf("/n overflow");
	}
	else
	{
	printf("/n enter value");
	scanf("%d",&x);
	ptr->data=x;
	printf("/n enter position");
	scanf("%d",&pos);
	temp=start;
	if(pos==1)
	{
	if(start==NULL)
	{
	ptr->data=x;
	ptr->next=NULL;
	start=ptr;
	}
	else
	{
	ptr->data=x;
	ptr->next=start;
	start=ptr;
	}
	}
	else
	{
	for(i=2;i<pos;i++)
	{
	if(temp==NULL)
	{
	printf("/n cant insert");
	}
	temp=temp->next;
	}ptr->next=temp->next;
	temp->next=ptr;
	}
	}
}
void disp()
{
	struct node *ptr;
	ptr=start;
	if(ptr==NULL)
	{
	printf("/n empty list");
	}
	else
	{
	while(ptr!=NULL)
	{
	printf("%d-",ptr->data);
	ptr=ptr->next;
	}
	printf("null");
	}
}

void delend()
{
	int x;
	struct node *ptr,*ptr1;
	if(start==NULL)
	{
	printf("\nlist is empty");
	}
	else if(start->next==NULL)
	{
	x=start->data;
	start=NULL;
	free(start);
	printf("\n%d deleted",x);
	}
	else
	{
	ptr=start;
	while(ptr->next!=NULL)
	{
	ptr1=ptr;
	ptr=ptr->next;
	}
	ptr1->next=NULL;
	x=ptr->data;
	free(ptr);
	printf("\n%d deleted",x);
	}
}

void delbegin()
{
	int x;
	struct node *ptr;
	if(start==NULL)
	{
	printf("\nlist is empty");
	}
	else
	{
	ptr=start;
	start=ptr->next;
	x=ptr->data;
	free(ptr);
	printf("\n%d deleted",x);
	}
}

void delpos()
{
	struct node *ptr,*ptr1;
	int pos,i,x;
	ptr=start;
	if(ptr==NULL)
	{
	printf("\n list is empty");
	}
	else
	{
	printf("\n enter position  :");
	scanf("%d",&pos);
	if(pos==1)
	{
	ptr=start;
	start=ptr->next;
	x=ptr->data;
	free(ptr);
	printf("\n%d deleted");
	}
	else
	{
	for(i=1;i<pos;i++)
	{
	ptr1=ptr;
	ptr=ptr->next;
	if(ptr==NULL)
	{
	printf("\n cant delete");
	return;
	}
	}
	ptr1->next=ptr->next;
	x=ptr->data;
	free(ptr);
	printf("\n %d deleted",x);
	}
	}
}

void search()
{
	struct node *ptr;
	int x,i=0,f;
	ptr=start;
	if (ptr==NULL)
	{
	printf("/n list is empty");
	}
	else
	{
	printf("/n enter element to search");
	scanf("%d",&x);
	while(ptr!=NULL)
	{
	if(ptr->data==x)
	{
	printf("\n item found at position %d",i+1);
	f=0;
	}
	else
	{
	f=1;
	}
	i++;
	ptr=ptr->next;
	}
	if(f==1)
	{
	printf("\n item not found");
	}
	}
 }








































