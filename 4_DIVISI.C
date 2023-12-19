#include<stdio.h>
#include<conio.h>
void main()
{
int r;
clrscr();
r=sub();
printf("%d",r);
getch();
}
int sub()
{
int n1,n2,res;
printf("enter number : ");
scanf("%d",&n1);
printf("enter number : ");
scanf("%d",&n2);
res=n1/n2;
return res;
}
