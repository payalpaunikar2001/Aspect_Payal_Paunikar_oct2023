#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,sp;
clrscr();
for(r=1;r<=4;r++)
{
for(sp=3;sp>=r;sp--)
{
printf(" ");
}
for(c=1;c<=r;c++)
{
printf("*");
}
printf("\n");
}

for(r=1;r<=3;r++)
{
for(sp=1;sp<=r;sp++)
{
printf(" ");
}
for(c=3;c>=r;c--)
{
printf("*");
}
printf("\n");
}
getch();
}