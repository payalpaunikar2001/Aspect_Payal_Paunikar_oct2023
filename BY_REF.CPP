#include<iostream.h>
#include<conio.h>
class one
{
public:
int a;
void setdata()
{
a=20;
}
void check(one &ob)
{
ob.a=12;
}
void getdata()
{
cout<<a<<endl;
}
};
void main()
{
clrscr();
one ob;
ob.setdata();
ob.getdata();
ob.check(ob);
ob.getdata();
getch();
}
