#include<stdio.h>
#include<conio.h>
void main()
{
int r;
r=cube();
printf("side of cube = %d");
scanf("%d",&r);
getch();
}

int cube()
{
int a,c;
clrscr();
printf("enter side of cube");
scanf("%d",&a);
c=a*a*a;
return c;
}

