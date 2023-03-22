#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void disp();
int main()
{
clrscr();
top=-1;
printf("enter stack size");
scanf("%d",&n);
printf("----------\nOPERATIONS\n----------\n1.push\n2.pop\n3.display\n4.exit");
do
{
printf("\n enter choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
 {
 pop();
 break;
 }
 case 3:
 {
 disp();
 break;
 }
 case 4:
 {
 printf("exit pls");
 break;
 }
 default:{
 printf("invalid choice");
 }
}
}
while(choice!=4);
return 0;
}
void push()
{if(top>=n-1)
{
printf("overflow");
}
else{
printf("enter new value");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if (top<=-1)
{
printf("underflow");
}
else
{
printf("poped element is %d",stack[top]);
top--;
}
}
void disp()
{
if(top>=0)
{
printf("elements in stack :");
for(i=top;i>=0;i--)
{
printf("%d\t",stack[i]);
}
printf("next choice");
}
else
{
printf("empty stack") ;
}
}






















































