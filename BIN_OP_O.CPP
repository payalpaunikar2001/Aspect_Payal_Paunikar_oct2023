//operator overloading
//binary operator overloading
#include<iostream.h>
#include<conio.h>
#include<string.h>
class binary
{
public:
char name[10];
void seta(char n1[])
{
strcpy(name,n1);
}
void geta()
{
cout<<name;
}
void operator +(binary ob2)
{
strcat(name,ob2.name);
}
};
void main()
{
clrscr();
binary ob1,ob2;
ob1.seta("payal");
ob2.seta("paunikar");
ob1+ob2;
ob1.geta();
getch();
}



