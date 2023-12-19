#include<stdio.h>
#include<conio.h>
void pali(int n);
void main()
{
int num;
clrscr();
printf("enter a number : ");
scanf("%d",&num);
pali(num);
getch();
}
void pali(int n)
{
int d1,d2,d3,rev,org;
org=n;
d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
rev=d1*100+d2*10+d3*1;
printf("reverse: %d\n",rev);
if(rev==org)
printf("palinrome\n");
else
printf("not palindrom");
}

