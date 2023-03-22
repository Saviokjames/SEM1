#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int a[1000],n;
printf("enter array size\n");
scanf("%d",&n);                                    //array insertion
printf("enter array values\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("entered array values : \n");             //display
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("enter element to insert : \n");
int item;
scanf("%d",&item);                                   //new value and pos
printf("enter position to insert : \n");
int pos;
scanf("%d",&pos);
for(i=n;i>=pos-1;i--)	       //insertion
a[i+1]=a[i];
a[pos-1]=item;
n=n+1;
/*int temp=0 ;
for(i=0;i<n;i++)
{
if (i==pos)
{
temp=a[i];
a[i]=item;
a[i+1]=temp;
}
}
n=n+1; */

printf("NEW array values : \n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}


getch();
}
