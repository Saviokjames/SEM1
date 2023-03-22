#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int a[1000],n,b[1000],num,c[1000];
printf("enter array size of array 1\n");
scanf("%d",&n);                                    //array 1 insertion
printf("enter sorted  array values\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
int j;
j=i;
printf("enter array size of array 2\n");
scanf("%d",&num);                                    //array 2 insertion
printf("enter sorted  array values\n");
for(i=0;i<num;i++)
{
scanf("%d",&b[i]);
c[j]=b[i];
j++;
}
printf("ARRAY 1 : \n");             //display 1
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n ARRAY 2 : \n");             //display  2
for(i=0;i<num;i++)
{
printf("%d\t",b[i]);
}
int t;
for (i=0;i<j;i++)
{
for(int l=i+1;l<j;l++)
{

if(c[i]>c[l])
{
t=c[i];
c[i]=c[l];
c[l]=t;
}}}
printf("\n sorted ARRAY : \n");             //display
for(i=0;i<j;i++)
{
printf("%d\t",c[i]);
}
getch();
}



