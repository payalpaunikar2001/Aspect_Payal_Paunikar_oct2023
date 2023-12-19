#include<stdio.h>
#include<conio.h>

struct customer
{
int id;
char name[10];
char phone[11];
}c1,c2;

void main()
{
clrscr();
printf("enter id : \n");
scanf("%d",&c1.id);
printf("enter name : \n");
scanf("%s",c1.name);
printf("enter phone number : \n");
scanf("%s",c1.phone);

printf("enter id : \n");
scanf("%d",&c2.id);
printf("enter name : \n");
scanf("%s",c2.name);
printf("enter phone number : \n");
scanf("%s",c2.phone);

printf("id = %d\n",c1.id);
printf("name = %s\n",c1.name);
printf("phone = %s\n",c1.phone);

printf("id = %d\n",c2.id);
printf("name = %s\n",c2.name);
printf("phone = %s",c2.phone);

getch();
}
