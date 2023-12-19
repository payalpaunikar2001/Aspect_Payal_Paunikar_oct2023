#include<iostream.h>
#include<conio.h>

class stud
{
public:
int id;
char name[10];

public:
void setdata()
{
cout<<"enter id : ";
cin>>id;
cout<<"enter name : ";
cin>>name;
}

void getdata()
{
cout<<id<<endl;
cout<<name<<endl;
}
};

void main()
{
int i;
clrscr();
stud ob[3];
for(i=0;i<=2;i++)
{
ob[i].setdata();
}
for(i=0;i<=2;i++)
{
ob[i].getdata();
}

getch();
}




