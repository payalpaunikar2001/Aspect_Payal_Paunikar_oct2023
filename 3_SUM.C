#include<stdio.h>
#include<conio.h>
int fun(int x,int y);
void main()
{
int a,b,r;
clrscr();
printf("enter 2 number\n");
scanf("%d %d",&a,&b);
r=fun(a,b);
printf("%d",r);
getch();


}


int fun(int x, int y)
{
int sum;
sum=x+y;
return sum;
}
