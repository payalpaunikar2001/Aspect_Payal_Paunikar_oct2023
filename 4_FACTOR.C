#include<stdio.h>
#include<conio.h>
void main()
{
int r;
clrscr();
r=fun();
printf("factorial= %d",r);
getch();
}

int fun()
{
int c,n,f=1;
printf("enter a number");
scanf("%d",n);
for(c=1;c<=n;c++)
f=f*c;
return f;
}


