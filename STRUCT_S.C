#include<stdio.h>
#include<conio.h>

struct student
{
char name[10];
int age;
char addr[10];
char mob[11];
}s1;

void main()
{
clrscr();
printf("\nenter name : \n");
scanf("%s",s1.name);
printf("enter age : \n");
scanf("%d",&s1.age);
printf("enter address : \n");
scanf("%s",s1.addr);
printf("enter mobile number : \n");
scanf("%s",s1.mob);

printf("name = %s\n",s1.name);
printf("age = %d\n",s1.age);
printf("address = %s\n",s1.addr);
printf("mobile = %s",s1.mob);
getch();
}

