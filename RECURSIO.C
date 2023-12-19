#include<stdio.h>
#include<conio.h>
int i=1;
void fun()
{
printf("%d\n",i);
i++;
if(i==11)
return;
fun();
}
void main()
{
clrscr();
fun();
getch();
}

