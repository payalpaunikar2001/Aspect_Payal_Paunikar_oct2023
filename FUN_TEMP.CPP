#include<iostream.h>
#include<conio.h>

template<class tem>
tem add(tem x,tem y)
{
return(x+y);
};
void main()
{
clrscr();
cout<<add(2,3);
getch();
}
