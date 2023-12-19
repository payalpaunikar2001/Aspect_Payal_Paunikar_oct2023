#include<stdio.h>
#include<conio.h>
void main()
{
char grade;
clrscr();
printf("enter grade : ");
scanf("%c",&grade);
if(grade=='A' || grade=='a')
{
printf("average");
}
else
if(grade=='E' || grade=='e')
{
printf("exellent");
}
else
if(grade=='V' || grade=='v')
{
printf("very good");
}
else
if(grade=='G' || grade=='g')
{
printf("good");
}
else
if(grade=='F' || grade=='f')
{
printf("fail");
}
else  {
printf("not exist");}
getch();
}


