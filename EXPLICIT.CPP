#include<iostream.h>
#include<conio.h>

class one
{
public:
int a;
one (int x)
{
a=x;
}
void get()
{
cout<<a<<endl;
}
};
void main()
{
clrscr();
one ob1=one(5);
one ob2=one(10);
one ob3=one(15);
ob1.get();
ob2.get();
ob3.get();
getch();
}
