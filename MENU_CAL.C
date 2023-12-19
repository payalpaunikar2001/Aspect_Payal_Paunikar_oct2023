#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,res,ch;
clrscr();
printf("press 1 for addition\n");
printf("press 2 for subtraction\n");
printf("press 1 for multiplication\n");
printf("press 1 for division\n");
printf("enter your choice\n");
scanf("%d",&ch);
printf("enter num1 and num2 :");
scanf("%d %d",&num1,&num2);
switch(ch)
{
case 1:
res=num1+num2;
break;
case 2:
res=num1-num2;
break;
case 3:
res=num1*num2;
break;
case 4:
res=num1%num2;
break;
}
printf("result is %d",res);
getch();
}
