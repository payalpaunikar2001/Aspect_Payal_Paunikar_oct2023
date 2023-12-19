#include<stdio.h>
#include<conio.h>
void fun()
{
static int i=1;
if(i==11)
return;
printf("%d\n",i);
i++;
fun();
}
void main()
{
clrscr();
fun();
getch();
}


