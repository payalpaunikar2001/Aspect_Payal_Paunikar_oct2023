#include<stdio.h>
#include<conio.h>
void main()
{
int sel_price, cost_price,profit;
clrscr();
printf("enter selling price :");
scanf("%d",&sel_price);
printf("enter cost price :");
scanf("%d",&cost_price);
profit=sel_price-cost_price;
printf("%d",profit);
if(profit>0)
{
printf("\nprofit");
}
else
{
printf("\nloss");
}
getch();
}

