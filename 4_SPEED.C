#include<stdio.h>
#include<conio.h>
void main()
{
int r;
clrscr();
r=speed();
printf("speed = %d",r);
getch();
}

int speed()
{
int dt,t,s;
printf("enter distance : ");
scanf("%d",&dt);
printf("enter time : ");
scanf("%d",&t);
s=dt/t;
return s;
}



