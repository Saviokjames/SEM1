#include<stdio.h>
#include<conio.h>
int Q[100],choice,i,front,rear,size,item;
void insertion();
void deletion();
void disp();
void main()
{
clrscr();
front=-1;
rear=-1;
printf("enter circular queue size");
scanf("%d",&size);
 do
{
printf("\n----------\nOPERATIONS\n----------\n1.insertion   *\n2.deletion    *\n3.display     *\n4.exit        *");

printf("\n\t\t\t\t PLS ENTER UR CHOICE");
scanf("%d",&choice);
clrscr();
 switch(choice)
{
 case 1:
 {
 printf("\n Enter item to insert")  ;
 scanf("%d",&item);
 insertion();
 break;
 }
 case 2:
 {
 deletion();
 break;
 }
 case 3:
 {
 disp();
 break;
 }
 case 4:
 {
 printf("\n exit pls");
 break;
 }
 default:
 {
 printf("INVALID CHOICE") ;
 }
}
}
while(choice!=4);
getch();
}                        //main fn ending
 void insertion()
 {
 if((front==0&&rear==size-1)||(front==rear+1))
  {
  printf("\n OVER FLOW CONDITION");
  }
 else if(front==-1)
 {
 front=0;
 rear=0;
 }
 else if(rear==size-1)
 {
 rear=0;
 }
 else
 {
 rear=rear+1;
 }
 Q[rear]=item;
 }                  //INSETION ENDS
		    //VOID DELETION

void deletion()
{
 if(front==-1&&rear==-1)
 {
 printf("UNdER FLOW");
 }
 else if(rear==front)
 {
 printf("THE dELETEd ELEMENT IS : %d",Q[front]);
 front=-1;
 rear=-1;
 }
 else
 {
 printf(" THE dELETEd ELEMENT IS : %d",Q[front]);
 front+=1;
 }
}
void disp()
{
i=front;
if(front==-1&&rear==-1)
{
printf("\n EMPTY Q") ;
}
else if(front<=rear)
{
for(i=front;i<=rear;i++)
printf("%d\t",Q[i]);
}
else
{
for(i=front;i<=size-1;i++)
printf("%d\t",Q[i]);
for(i=0;i<=rear;i++)
printf("%d\t",Q[i]);
}
}





















































