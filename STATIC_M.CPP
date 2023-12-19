#include<iostream.h>
#include<conio.h>

class member
{
public:
static int a;
public:
void set()
{
a++;
}
void get()
{
cout<<a<<endl;
}
};
int member :: a;

void main()
{
clrscr();
member ob;
ob.get();
ob.get();
ob.get();
ob.set();
ob.get();
ob.get();
ob.get();
getch();
}





