//class template //addition of 2 different value //may be int or float
//or float or double
#include<iostream.h>
#include<conio.h>

template<class t>
class one
{
public:
t x,y,c;
void set()
{
cout<<"enter x and y"<<endl;
cin>>x>>y;
}
void add()
{
c=x+y;
}
void res()
{
cout<<c;
}
};
void main()
{
clrscr();
one<float>ob;  //or int or double
ob.set();
ob.add();
ob.res();
one<int>ob1;  //or int or double
ob1.set();
ob1.add();
ob1.res();
getch();
}
