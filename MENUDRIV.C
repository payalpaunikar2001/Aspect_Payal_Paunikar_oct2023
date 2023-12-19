#include<stdio.h>
#include<conio.h>
void main()
{
int r,l,w,b,h,ch;
float area;
clrscr();
printf("press 1 for area of circle\n");
printf("press 2 for area of rectangle\n");
printf("press 3 for area of triangle\n");
printf("input your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter radius of circle : ");
scanf("%d",&r);
area=3.14*r*r;
break;
case 2:
printf("enter length and width of rectangle : ");
scanf("%d %d",&l,&w);
area=l*w;
break;
case 3:
printf("enter base and height of triangle : ");
scanf("%d %d",&b,&h);
area=b*h/2;
break;
}
printf("area is: %f",area);
getch();
}