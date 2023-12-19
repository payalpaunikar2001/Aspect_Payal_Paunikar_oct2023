#include<stdio.h>
#include<conio.h>
void main()
{
int a,r;
clrscr();
printf("enter side of cube : ");
scanf("%d",&a);
r=cube(a);
printf("volume of cube is %d",r);
getch();
}
int cube(int s)
{
int res;
res=s*s*s;
return res;
}