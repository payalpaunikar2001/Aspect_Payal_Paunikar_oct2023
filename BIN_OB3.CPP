//operator overloading
//binary operator overloading //add ob1+ob2 & store in 3rd ob
#include<iostream.h>
#include<conio.h>
#include<string.h>
class binary
{
public:
char name[20];

void seta(char n1[])
{
strcpy(name,n1);
}

void geta()
{
cout<<name;
}

binary operator + (binary ob2)
{
binary ob3;
strcpy(ob3.name,name);
strcat(ob3.name,ob2.name);
return ob3;
}
};

void main()
{
clrscr();
binary ob1,ob2,ob3;
ob1.seta("payal");
ob2.seta("paunikar");
ob3=ob1+ob2;
ob3.geta();
getch();
}
