#include<stdio.h>
#include<conio.h>
//int add();
void main()
{
int r;
clrscr();
r=add();
printf("addition is %d",r);
getch();
}
int add()
{
int num1,num2,res;
printf("enter number\n");
scanf("%d",&num1);
printf("enter number\n");
scanf("%d",&num2);
res=num1+num2;
return res;
}
