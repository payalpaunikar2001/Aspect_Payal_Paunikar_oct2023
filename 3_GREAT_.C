#include<stdio.h>
#include<stdio.h>
void main()
{
int num1,num2,r;
clrscr();
printf("enter 2 number");
scanf("%d  %d", &num1,&num2);
r=grt(num1,num2);
printf("great number is %d",r);
getch();
}
int grt(int a,int b)
{
if(a>b)
return a;
else
return b;
}
