#include<stdio.h>
#include<conio.h>
void main()
{
int r;
clrscr();
r=evenodd();
if(r==1)
printf("number is even");
else
printf("number is odd");
getch();
}
int evenodd()
{
int n;
printf("enter a number");
scanf("%d",&n);
if(n%2==0)
return 1;
else
return 0;
}

