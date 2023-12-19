#include<stdio.h>
#include<conio.h>
int main()
{
//int c;
char ch;
clrscr();
printf("enter anything\n");
//scanf("%d",&c);
scanf("%c",&ch);
if(ch>=48 && ch<=57)
{
printf("digit");
}
else
if(ch>=97 && ch<=122 || ch>=65 && ch<=90)
{
printf("alphabet");
}
else
{
printf("special symbol");
}
getch();
}