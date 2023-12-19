#include<stdio.h>
#include<conio.h>

struct student
{
int id;
char name[10];
char phone[10];
}s1;

void main()
{
int i;
struct student s1[5];
clrscr();
for(i=0;i<=4;i++)
{
printf("\n");
printf("enter student %d record\n",i+1);
printf("enter id : ");
scanf("%d",&s1[i].id);
printf("\nenter name : ");
scanf("%s",s1[i].name);
printf("\nenter phone number : ");
scanf("%s",s1[i].phone);
}
for(i=0;i<=4;i++)
{
printf("%d\n",s1[i].id);
printf("%s\n",s1[i].name);
printf("%s\n",s1[i].phone);
}
getch();
}