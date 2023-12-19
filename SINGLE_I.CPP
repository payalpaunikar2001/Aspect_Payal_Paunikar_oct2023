#include<iostream.h>
#include<conio.h>
class one
{
public:
int a;
};
class two:public one
{
int b;
public:
void setab()
{
a=2,b=10;
}
void getab()
{
cout<<a<<endl<<b;
}
};

void main()
{
clrscr();
two ob;
ob.setab();
ob.getab();
getch();
}




