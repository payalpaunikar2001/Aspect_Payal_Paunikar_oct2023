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
one ob1(2);
one ob2(6);
one ob3(8);
ob1.get();
ob2.get();
ob3.get();
getch();
}
