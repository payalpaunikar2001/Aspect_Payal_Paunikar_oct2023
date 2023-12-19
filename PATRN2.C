#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
char ch='D';
clrscr();
for(r=1;r<=4;r++)
{
for(c=1;c<=r;c++)
{
printf("%c",ch);
ch--;
}
ch='D';
printf("\n");
}

for(r=1;r<=3;r++)
{
for(c=3;c>=r;c--)
{
printf("%c",ch);
ch--;
}
ch='D';
printf("\n");
}
getch();
}