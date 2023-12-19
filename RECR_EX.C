#include<stdio.h>
#include<conio.h>
int a,b,add;
void fun()
{
printf("enter a and b");
scanf("%d %d:",&a,&b);
add=a+b;
printf("add=%d",add);
return;
fun();
}

void main()
{
clrscr();
fun();
getch();
}