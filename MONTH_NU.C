#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("enter month number(1-12) :");
scanf("%d",&num);
if(num==1 || num==3 || num==5 || num==7 ||num==8 || num==10 || num==12)
{
printf("31 days");
}
else
if(num==4 || num==6 || num==9 ||num==11)
{
printf("30 days");
}
else
if(num==2)
{
printf("28 days");
}
else
printf("not exist");
getch();
}