#include<stdio.h>
#include<conio.h>
void main()
{
int r;
clrscr();
r=force();
printf("force %d",r);
getch();
}

int force()
{
int m,a,f;
printf("enter mass and acceleration\n");
scanf("%d %d",&m,&a);
f=m*a;
return f;
}