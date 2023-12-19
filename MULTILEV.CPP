#include<iostream.h>
#include<conio.h>
class one
{
public:
int a;
void seta()
{
a=1;
}
void geta()
{
cout<<a<<endl;
}
};
class two:public one
{
public:
int b;
void setb()
{
b=5;
}
void getb()
{
cout<<b<<endl;
}
};

class three:public two
{
public:
int c;
void setc()
{
c=10;
}
void getc()
{
cout<<c;
}
};
void main()
{
clrscr();
three ob;
ob.seta();
ob.setb();
ob.setc();
ob.geta();
ob.getb();
ob.getc();
getch();
}