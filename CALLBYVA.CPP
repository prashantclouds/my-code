#include<stdio.h>
#include<conio.h>
void main()
{
void swap(int,int);
int x,y;
clrscr();
x=5;
y=4;
printf("\n before swap");
printf("\n %d",x);
printf("\n %d",y);
swap(x,y);
printf("\n after swap");
printf("\n %d",x);
printf("\n %d",y);
getch();
}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("\n inside swap");
printf("\n x is %d",x);
printf("\n y is %d",y);
}