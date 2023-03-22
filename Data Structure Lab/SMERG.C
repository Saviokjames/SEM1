#include<stdio.h>
#include<conio.h>
void pop()
{
if(top==-1)
printf("underflow");
else
{printf("poped=%d",array[top]);
top=top-1;
}
}
void push()
{
int x;
if (top==size-1)
{
printf("overflow")  ;
}
else
{printf("enter element to insert");
scanf("%d",&x);
top+=1;
array[top]=x;
}
}
void main()
{
clrscr();

int a[size],top=-1,option ;
printf("enter stack size");
scanf("%d",&size)
printf("choose opton"\n"1.add element"\n"2.delete element")
scanf("%d",&option)
switch(option)
{
case 1:
push();
case 2:
pop();
default:
printf("invalid option");

