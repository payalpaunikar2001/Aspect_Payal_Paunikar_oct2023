#include<stdio.h>
#include<stdio.h>
float circle();
void main()
{
float r;
clrscr();
r=circle();
printf("area of circle is %f",r);
getch();
}
float circle()
{
float pi=3.142,res;
int rad;
printf("enter radius : ");
scanf("%d",&rad);
res = pi*rad*rad;
return res;
}

