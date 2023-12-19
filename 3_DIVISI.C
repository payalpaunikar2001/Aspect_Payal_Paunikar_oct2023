
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,r;
clrscr();
printf("enter 2 number\n");
scanf("%d %d",&a,&b);
r=fun(a,b);
printf("div=%d",r);
getch();
}
int fun(int p,int q)
{
int div;
div=p%q;
return div;
}
