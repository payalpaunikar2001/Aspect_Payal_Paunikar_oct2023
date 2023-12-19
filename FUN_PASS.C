#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void login();
int validate(char u1[],char ps1[]);

void scr()
{
int ch;
while(1)
{
printf("press 1 to login ");
printf("press 2 to exit");
scanf("%d",&ch);
if(ch==1)
{
login();
}
if(ch==2)
{
exit(0);
}
}
}
void main()
{
clrscr();
scr();
getch();
}
void login()
{
char l=1,ch,usr[10],ps[10];
int s;
clrscr();
printf("enter username\n");
//scanf("%s",usr);
while(ch!='\r')
{
//printf("*\n");
ch=getch();
usr[l]=ch;
l++;
printf("*");
}
usr[1]='\0';
printf("%s",usr);
getch();

printf("enter password");
scanf("%s",ps);
s=validate(usr,ps);
if(s==1)
{
printf("login successfull");
}
else
{
printf("not successfull");
}
}
int validate(char u1[],char ps1[])
{
char tusr[]={"payal"},tpas[]={"paunikar"};
printf("%s %s ",u1,ps1);
if(strcmp(u1,tusr)==0 && strcmp(ps1,tpas)==0)
{
return 1;
}
else
return 0;
}
