#include<stdio.h>
#include<conio.h>
void main()
{
int r;
clrscr();
r=great();
printf("%d is greater",r);
getch();
}
int great()
{
int n1,n2;
printf("enter a number : ");
scanf("%d",&n1);
printf("enter another number : ");
scanf("%d",&n2);
if(n1>n2)
{
return n1;}
else
{
return n2;}
}
