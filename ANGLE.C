#include<stdio.h>
#include<conio.h>
int main()
{

int s,a1,a2,a3;
clrscr();
printf("enter a1,a2,a3 : ");
scanf("%d %d %d",&a1 ,&a2, &a3);
s=a1+a2+a3;
if(s==90)
{
printf("\nright angle triangle");
}
else
if(s<=90)
{
printf("acute angle triangle\n");
}
else
if(s>90)
{
printf("obtuse angle triangle");
}
getch();
}
