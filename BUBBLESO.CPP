#include<stdio.h>
#include<conio.h>
#define n 10
void main()
{
int a[n]={33,34,4,55,66,77,34,23,12,21};
int i,k,temp;
clrscr();
printf("\n before swap\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}

for(k=1;k<n;k++)
{
for(i=0;i<n-k;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
printf("\n after swap\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}