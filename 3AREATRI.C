#include<stdio.h>
#include<conio.h>
void main()
{
int t,h,b;
clrscr();
printf("enter breadth : ");
scanf("%d",&b);
printf("enter height : ");
scanf("%d",&h);
t=area(b,h);
printf("area of triangle = %d",t);
getch();
}
int area(int a, int b)
{
int res;
res=a*b/2;
return res;
}

