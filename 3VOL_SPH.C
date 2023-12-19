#include<stdio.h>
#include<conio.h>
void main()
{
int s,r;
clrscr();
printf("enter radius : ");
scanf("%d",&r);
s=sphere(r);
printf("volume of sphere = %d",s);
getch();
}
int sphere(int a)
{
int res;
float pi=3.142;
res=4/3*pi*a*a*a;
return res;
}