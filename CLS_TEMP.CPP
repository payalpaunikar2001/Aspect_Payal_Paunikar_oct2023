//class template //addition of two float,int,double
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
getch();
}






