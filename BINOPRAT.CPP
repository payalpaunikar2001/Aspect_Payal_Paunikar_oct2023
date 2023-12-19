//operator overloading
//binary operator overloading //add ob1+ob2 & store in 3rd ob
#include<iostream.h>
#include<conio.h>
#include<string.h>
class binary
{
public:
char name[10];
char res[20];

void seta(char n1[])
{
strcpy(name,n1);
}

void geta()
{
cout<<name;
}

void get (binary ob1)
{
strcpy(name,res);
}

void display()
{
cout<<res;
}


void operator +(binary ob2)
{
strcat(name,ob2.name);
}
};

void main()
{
clrscr();
binary ob1,ob2,ob3;
ob1.seta("payal");
ob2.seta("paunikar");
ob1+ob2;
ob3.get(ob1);
ob3.display();
getch();
}
