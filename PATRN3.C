#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
clrscr();
for(r=3;r>=1;r--)
{
for(c=1;c<=r;c++)
{
printf("*");
}
printf("\n");
}

for(r=2;r<=3;r++)
{
for(c=1;c<=r;c++)
{
printf("*");
}
printf("\n");
}
getch();
}