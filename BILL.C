#include<stdio.h>
#include<conio.h>
void main()
{
int id,unit;
char name[10];
clrscr();
printf("enter customer id :");
scanf("%d",&id);
printf("enter customer name :");
scanf("%s",&name[10]);
printf("enter customer unit :");
scanf("%d",&unit);
if(unit==0 || unit<=199)
{
printf("1.20");
}
else
if(unit>=200 && unit<400)
{
printf("1.50");
}
else
if(unit>=400 && unit<600)
{
printf("1.80");
}
else
{
printf("2.00");
}
getch();
}
