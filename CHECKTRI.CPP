#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,sum=0;
clrscr();
printf("\n enter the angles of triangle");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
printf("\n the sum is=%d",sum);
if(sum>=180&& a>=0 && b>0 && c>0)
{
printf("\n the triangle is posible");
}
else
{
printf("\n triangle is not possible");
}
getch();
}