#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],c[100],n,num,p,i,j,k,temp;
clrscr();
printf("enter array size of array 1\n");
scanf("%d",&n);                                    //array 1 insertion
printf("enter sorted  array values\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("ARRAY 1 : \n");             //display 1
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}}
printf("\n sorted array:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("enter array size of array 2\n");
scanf("%d",&num);                                    //array 2 insertion
printf("enter array values\n");
for(i=0;i<num;i++)
{
scanf("%d",&b[i]);
}
printf("\n ARRAY 2 : \n");             //display  2
for(i=0;i<num;i++)
{
printf("%d\t",b[i]);
}
for(i=0;i<num-1;i++)
{
for(j=i+1;j<num;j++)
{
if(b[i]>b[j])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}
p=n+num;
printf("\n sorted ARRAY 2 : \n");             //display  2
for(i=0;i<num;i++)
{
printf("%d\t",b[i]);
}
i=0;
j=0;
k=0;
while(i<n && j<num )
{
if(a[i]<=b[j])
{
c[k]=a[i];
k++;
i++;
}
else{
c[k]=b[j];
k++;
j++;
}
}
while(i<n)
{
c[k]=a[i];
k++;
i++;
}
while(j<num)
{
c[k]=b[j];
k++;
j++;
}
printf("MERGED ARRAY:\t");
for(i=0;i<p;i++)
printf("\t%d",c[i]);
getch();
}






















