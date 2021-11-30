//WAP TO FIND AREA OF CIRCLE AND CIRCUMFRENCE OF CIRCLE
#include<stdio.h>
#include<conio.h>
# define pie 3.14
void main()
{
float a,r,c;
clrscr();
printf("\n enter the radius of circle");
scanf("%f",&r);
a=pie*r*r;
printf("\n area of circle=%f",a);
c=2*pie*r;
printf("\n circumfrence of circle is =%f",c);
getch();
}