#include<stdio.h>
#include<stdio.h>
void main()
{
int num1,num2;
clrscr();
printf("enter 2 number");
scanf("%d %d",&num1,&num2);
great(num1,num2);

void great(int n1,int n2)
{
if(n1>n2)
{
printf("%d is great ",n1);
}
else
{printf("%d is small")}
getch();
