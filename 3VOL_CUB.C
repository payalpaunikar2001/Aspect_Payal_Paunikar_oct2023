#include<stdio.h>
#include<conio.h>
void main()
{
int t,h,b,l;
clrscr();
printf("enter length : ");
scanf("%d",&l);
printf("enter breadth : ");
scanf("%d",&b);
printf("enter height : ");
scanf("%d",&h);
t=area(l,b,h);
printf("area of triangle = %d",t);
getch();
}
int area(int a, int b,int c)
{
int res;
res=a*b*c;
return res;
}

