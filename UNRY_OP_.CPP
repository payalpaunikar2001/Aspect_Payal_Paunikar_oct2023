#include<iostream.h>
#include<conio.h>
class unary
{
public:
int a;
void operator -()
{
cout<<"- called";
}
};
void main()
{
clrscr();
unary ob;
-ob;
getch();
}