#include<stdio.h>
#include<conio.h>
void fun(int i)
{
if(i==11)
return;
printf("%d\n",i);
fun(i+1);
}
void main()
{
clrscr();
fun(1);
getch();
}
