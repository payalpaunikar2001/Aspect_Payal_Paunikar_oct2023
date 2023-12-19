#include<iostream.h>
#include<conio.h>
class one
{
public:
int a,b;
void setdata(int x,int y)
{
a=x;
b=y;
}
void add(one &obj2,one &obj3)
{
obj3.a=a+obj2.a;
obj3.b=b+obj2.b;
}
void getdata()
{
cout<<a<<endl<<b<<endl;
}
};
void main()
{
clrscr();
one obj1,obj2,obj3;
obj1.setdata(4,5);
obj2.setdata(6,7);
obj1.add(obj2,obj3);
obj3.getdata();
getch();
}
