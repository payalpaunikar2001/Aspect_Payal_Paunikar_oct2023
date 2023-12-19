#include<iostream.h>
#include<conio.h>

class payal
{
public:
static int a;
public:
static void set()
{
a++;
}
void get()
{
cout<<a<<endl;
}
};
int payal :: a;

void main()
{
clrscr();
payal ob1,ob2,ob3;
ob1.get();
ob2.get();
ob3.get();
payal::set();
ob1.get();
ob2.get();
ob3.get();
getch();
}
