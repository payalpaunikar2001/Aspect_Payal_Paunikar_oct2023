#include<stdio.h>
#include<conio.h>
void main()
{
int r,m,a;
clrscr();
printf("enter mass : ");
scanf("%d",&m);
printf("enter acceleration : ");
scanf("%d",&a);
r=force(m,a);
printf("force = %d",r);
getch();
}
int force(int a,int b)
{
int f;
f=a*b;
return f;
}