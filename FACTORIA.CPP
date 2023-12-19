#include<iostream.h>
#include<conio.h>
class factorial
{
public:
int i,n,f;
public:

void setdata()
{
cout<<"enter number";
cin>>n;
}

void check()
{
f=1;
for(i=1;i<=n;i++)
f=f*i;
}

void getdata()
{
cout<<f;
}
};

void main()
{
clrscr();
factorial ob;
ob.setdata();
ob.check();
ob.getdata();
getch();
}











