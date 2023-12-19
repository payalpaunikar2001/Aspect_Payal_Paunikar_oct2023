#include<iostream.h>
#include<conio.h>
#include<string.h>
class one
{
public:
char *name;
int l;
int a;

one()
{
l=0;
name=new char[1];
}

one (char n1[])
{
name=new char[strlen(n1)+1];
strcpy(name,n1);
}
one(one &ob1)
{
a=ob1.a;
}
void get()
{
cout<<"\n\n\n"<<name<<endl;
}
};
void main()
{
clrscr();
one ob1("payal");
one ob2;
one ob3;
ob1.get();
ob2.get();
ob3.get();
getch();
}











