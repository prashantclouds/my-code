#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char c;
clrscr();
printf("\n enter the character");
scanf("%c",&c);
c=tolower(c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
printf("\n vowel");
}
else
{
printf("\n consonent");
}
getch();
}