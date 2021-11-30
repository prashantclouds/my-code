#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
void show(int[],int);
int arr[5]={11,22,33,44,55};
int n=5;
show(arr,n);
getch();
}
void show(int a[],int sz)
{
int k;
for(k=0;k<sz;k++)
printf(" %d ",a[k]);
}