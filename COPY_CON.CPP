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

one(one &ob1)
{
a=ob1.a;
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
one ob2= one (ob1);
one ob3(7);
ob1.get();
ob2.get();
ob3.get();
getch();
}
