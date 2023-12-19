//pure virtual function:no need to create object of base class.
#include<iostream.h>
#include<conio.h>
class one
{
public:
virtual void dis()=0;
};

class two: public one
{
public:
void dis()
{
cout<<"overridden method of class one";
}
};
void main()
{
clrscr();
two ob;
ob.dis();
getch();
}