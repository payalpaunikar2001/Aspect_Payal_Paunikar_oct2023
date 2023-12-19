#include<iostream.h>
#include<conio.h>

template<class tem,class tem1>
tem add(tem x,tem1 y)
{
return(x+y);
};
void main()
{
clrscr();
cout<<add(2.3,3);
getch();
}