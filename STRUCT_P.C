#include<stdio.h>
#include<conio.h>

struct employee
{
int id;
char name[10];
char phone[11];
};

void main()
{
int i;
struct employee e1[5];
clrscr();
for(i=0;i<=4;i++)
{
printf("enter student %d record\n",i+1);
printf("enter id : ");
scanf("%d",&e1[i].id);
printf("enter name : ");
scanf("%s",e1[i].name);
printf("enter phone number : ");
scanf("%s",e1[i].phone);
}
for(i=0;i<=4;i++)
{
if((e1[i].phone[8]=='8') && (e1[i].phone[9]=='8'))
{
clrscr();
printf("record of employee %d is :\n",i+1);
printf("ID =  %d\n",e1[i].id);
printf("NAME = %s\n",e1[i].name);
printf("PHONE = %s\n",e1[i].phone);
}
}
getch();
}
