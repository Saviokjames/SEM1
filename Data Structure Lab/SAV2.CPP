#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int a[1000],n,pos;
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
printf("\n\n enter position of element to delete");
scanf("%d",&pos);
if(pos>=n+1)
{
printf("not possible");
}
else
{
for(i=pos-1;i<n-1;i++)	       //deletion
a[i]=a[i+1];
n=n-1;
printf("new array values : \n");             //display
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
getch();
}
