#include<iostream.h>
#include<conio.h>
class one
{
public:
int a;
void seta()
{
a=10;
}
void geta()
{
cout<<a<<endl;
}
};

class two
{
public:
int b;
void setb()
{
b=20;
}
void geta()
{
cout<<b<<endl;
}
};

class three : public one, public two
{
public:
int c;
void setc()
{
c=30;
}
void getc()
{
cout<<c<<endl;
}
};

void main()
{
clrscr();
three ob;
ob.seta();
ob.setb();
ob.setc();
ob.one :: geta();
ob.one :: geta();
ob.getc();
getch();
}
