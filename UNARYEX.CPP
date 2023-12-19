#include<iostream.h>
#include<conio.h>
class unary
{
public:
int a;
void seta(int x)
{
a=x;
}
void geta()
{
cout<<a;
}
void operator +()
{
a=a+2;
}
};
void main()
{
clrscr();
unary ob;
ob.seta(5);
+ob;
ob.geta();
getch();
}







