#include<stdio.h>
#include<conio.h>
void evenodd(int n);
void main()
{
int num;
clrscr();
printf("enter a number : ");
scanf("%d",&num);
evenodd(num);
getch();
}
void evenodd(int n)
{
if(n%2==0)
printf("number is even");
else
printf("number is odd");
}