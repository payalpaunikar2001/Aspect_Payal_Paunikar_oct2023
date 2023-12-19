#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
public:
int id;
char name[20];
char mob[10];
void set()
{
id=101;
strcpy(name,"payal");
strcpy(mob,"9766039908");
}
void get()
{
cout<<"id is :"<<id<<endl;
cout<<"name is :"<<name<<endl;
cout<<"mobile number is :"<<mob<<endl;
}
};
class exam:public student
{
public:
int paper1,paper2;
void setex()
{
cout<<"enter paper 1 : "<<endl;
cin>>paper1;
cout<<"enter paper 2 : "<<endl;
cin>>paper2;
}
void getex()
{
cout<<paper1<<endl;
cout<<paper2<<endl;
}
};
class sports
{
public:
int sp;
void sets()
{
cout<<"enter sports marks : "<<endl;
cin>>sp;
}
void gets()
{
cout<<sp;
}
};
class result:public exam,public sports
{
public:
int res;
void calculate()
{
res=paper1+paper2+sp;
}
void display()
{
cout<<"total marks : "<<res;
}
};
void main()
{
clrscr();
result ob;
ob.set();
ob.get();
ob.setex();
//ob.getex();
ob.sets();
//ob.gets();
ob.calculate();
ob.display();
getch();
}

















































