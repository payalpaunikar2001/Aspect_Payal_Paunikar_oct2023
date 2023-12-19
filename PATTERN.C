#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
clrscr();
for(r=1;r<=4;r++)
{
for(c=1;c<=r;c++)
{
printf("%d",c);
}
printf("\n");
}

for(r=3;r>=1;r--)
{
for(c=1;c<=r;c++)
{
printf("%d",c);
}
printf("\n");
}
getch();
}

