#include<iostream.h>
#include<conio.h>
class demo
{
private:
int x;
public:
void get()
{
cout<<"\n enter the value of x";
cin>>x;
}
void show()
{
cout<<"\n x is "<<x;
}
}d1;
demo d2;
void main()
{
demo d3;
clrscr();
d1.get();
d2.get();
d3.get();
d1.show();
d2.show();
d3.show();
getch();
}
