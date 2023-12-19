#include<stdio.h>
#include<conio.h>
void main()
{
int r;
clrscr();
r=palidrom();
if(r==1)
printf("number is palindrom");
else
printf("number is not palindrom");
getch();
}
int palidrom()
{
int n,org,d1,d2,d3,rev;
printf("enter a number\n");
scanf("%d",&n);
org=n;
d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
rev=d1*100+d2*10+d3*1;
printf("reverse : %d\n",rev);
if(rev==org)
return 1;
else
return 0;
}
