#include<stdio.h>
#include<conio.h>
void main()
{
int r;
r=fun();
if(r==1)
printf("\narmstrong");
else
printf("not armstrong");
getch();
}

int fun()
{
int n,d1,d2,d3,res,org;;
clrscr();
printf("enter a number");
scanf("%d",&n);
org=n;
d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
res=d3*d3*d3+d2*d2*d2+d1*d1*d1;
printf("reverse %d",res);
if(res==org)
return 1;
else
return 0;
}
