#include<stdio.h>
#include<conio.h>
void main()
{
int i,ch,n1,n2,res;
clrscr();
printf("enter num 1 and num 2\n");
scanf("%d %d",&n1,&n2);
for(i=1;i<=4;i++)
{
printf("press 1 for addition\n");
printf("press 2 for subtraction\n");
printf("press 3 for multiplication\n");
printf("press 4 for division\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
res=n1+n2;
printf("addition of %d and %d : %d ",n1,n2,res);
}
break;

case 2:
{
res=n1-n2;
printf("subtraction of %d and %d : %d ",n1,n2,res);
}
break;

case 3:
{
res=n1*n2;
printf("multiplication of %d and %d : %d ",n1,n2,res);
}
break;

case 4:
{
res=n1/n2;
printf("division of %d and %d : %d ",n1,n2,res);
}
break;

default:
printf("invalid");
break;
}
}
getch();
}

