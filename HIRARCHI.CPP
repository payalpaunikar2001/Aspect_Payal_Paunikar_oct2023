#include<iostream.h>
#include<conio.h>
class one
{
public:
int a;
void seta()
{
a=2;
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
b=4;
}
void getb()
{
cout<<b<<endl;
}
};

class three:public one
{
public:
int c;
void setc()
{
c=6;
}
void getc()
{
cout<<c<<endl;
}
};
void main()
{
clrscr();
two ob;
ob.seta();
ob.setb();
ob.geta();
ob.getb();
three ob1;
ob1.seta();
ob1.setc();
ob1.geta();
ob1.getc();
getch();
}