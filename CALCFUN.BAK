#include<stdio.h>
#include<conio.h>
#include<process.h>
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
void main()
{
int ch,x,y,z;
char cho;
clrscr();
do
{
printf("\n menu\n1 add\n2 sub\n3 mul\n4 div");
printf("\n enter your choice");
scanf("%d",&ch);
if(ch>=1&&ch<=4)
{
printf("\n enter the value of x andy");
scanf("%d%d",&x,&y);
}
switch(ch)
{
case 1:
z=add(x,y);
break;
case 2:
z=sub(x,y)
break;
case 3:
z=mul(x,y);
break;
case 4:
z=div(x,y);
break;
default:
printf("\n sorry wrong choice");
getch();
exit(0);
}
printf("\n result is %d",z);
printf("\n do you want more");
scanf("\n %c",&cho);
}while(cho=='y');
getch();
}
int add(int x,int y)
{
int z;
z=x+y;
return z;
}
int sub(int x,int y)
{
int z;
z=x-y;
return z;
}
int mul(int x,int y)
{
int z;
z=x*y;
return z;
}
int div(int x,int y)
{
int z;
z=x/y;
return z;
}
