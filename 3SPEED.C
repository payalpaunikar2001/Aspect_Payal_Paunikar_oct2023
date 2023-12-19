#include<stdio.h>
#include<conio.h>
void main()
{
int s,d,t;
clrscr();
printf("enter distance : ");
scanf("%d",&d);
printf("enter time : ");
scanf("%d",&t);
s=speed(d,t);
printf("speed = %d",s);
getch();
}
int speed(int a, int b)
{
int res;
res=a/b;
return res;
}