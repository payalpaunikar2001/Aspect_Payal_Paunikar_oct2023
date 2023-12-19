#include<iostream.h>
#include<conio.h>
class one
{
public:
int num,res;
void setdata()
{
cout<<"enter number";
cin>>num;
}
void check(one ob)
{
ob.num=7;
res=num%2;
}
void getdata()
{
if(res==0)
{
cout<<"even"<<endl;
}
else
{
cout<<endl<<"odd";
}
}
};
void main()
{
clrscr();
one ob;
ob.setdata();
ob.check(ob);
ob.getdata();
getch();
}
