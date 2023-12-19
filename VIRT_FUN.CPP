//virtual function : base cls dont have body , derived class need overridding

#include<iostream.h>
#include<conio.h>
class one
{
public:
virtual void dis()
{
cout<<"one"<<endl;
}
};

class two: public one
{
public:
void dis()
{
cout<<"two";
}
};
void main()
{
clrscr();
one ob,*obpt;
obpt=&ob;
obpt->dis();
two ob2;
obpt=&ob2;
obpt->dis();
getch();
}




