#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
char ch='A';
clrscr();
for(r=1;r<=4;r++)
{
for(c=1;c<=r;c++)
{
printf("%c",ch++);
}
ch='A';
printf("\n");
}

for(r=3;r>=1;r--)
{
for(c=1;c<=r;c++)
{
printf("%c",ch++);
}
ch='A';
printf("\n");
}
getch();
}