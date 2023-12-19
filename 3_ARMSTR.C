#include<stdio.h>
#include<conio.h>
void main()
{
int num,r;
clrscr();
printf("enter a number");
scanf("%d",&num);
r=ams(num);
if(r==1)
printf("number is armstrong");
else
printf("number is not amstrong");
getch();
}

int ams(int n)
{
int d1,d2,d3,res,org;
org=n;
d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
res=d3*d3*d3+d2*d2*d2+d1*d1*d1;
printf("%d",res);
if(res==org)
return 1;
else
return 0;
}
