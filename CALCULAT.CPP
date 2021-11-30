#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
char ch;
float a,b,c;
clrscr();
printf("\n menu\n1 add\n2 sub\n3 mul\n4 div");
printf("\n enter the choice");
scanf("%d",&ch);
if(ch>=1&&ch<=4)
{
printf("\n enter the two number");
scanf("%f%f",&a,&b);
}
switch(ch)
{
case 1:
c=a+b;
break;
case 2:
c=a-b;
break;
case 3:
c=a*b;
break;
case 4:
c=a/b;
break;
default:
printf("\n sorry wrong choice");
getch();
exit(0);
}
printf("\n result is %f",c);
getch();
}