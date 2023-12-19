#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int acc_no;
void login();
void screen2();
void create();
void del ();
int validate(char u1[],char ps1[]);

void screen1()
  {
  int ch;
  while(1)
    {
    printf("enter 1 to login\n");
    printf("enter 2 to exit\n");
    scanf("%d",&ch);
      if(ch==1)
      {
      login();
      getch();
      clrscr();
      }
      if(ch==2)
      {
      exit(0);
      }
      }
    }


void login()
   {
   char user[10],ps[10];
   int s;
   clrscr();
   printf("enter username\n");
   scanf("%s",user);
   printf("enter password\n");
   scanf("%s",ps);
   clrscr();
   s=validate(user,ps);
   if(s==1)
     {
     printf("\nlogin successful\n");
     screen2();
     }
     else
     {
     printf("login not successful\n");
     login();
     }
     }

int validate(char u1[],char ps1[])
     {
     char tusr[]={"payal"},tpas[]={"paunikar"};
     printf("%s %s",u1,ps1);
       if (strcmp(u1,tusr)==0 && strcmp(ps1,tpas)==0)
       {
       return 1;
       }
       else
       return 0;
       }

void create()
       {
       int acc_no,initial_bal;
       char name[20],acc_type[20];
       printf("\nenter account number\n");
       scanf("%d",&acc_no);
       printf("enter your name\n");
       scanf("%s",&name);
       printf("enter type of account\n");
       scanf("%s",&acc_type);
       printf("enter initial balance\n");
       scanf("%d",&initial_bal);
       clrscr();
       printf("\t\t\t******ACCOUNT CREATED*******\n");
       printf("\n");
       printf("ACCOUNT NUMBER : %d \n",acc_no);
       printf("NAME : %s \n",name);
       printf("TYPE OF ACCOUNT : %s \n",acc_type);
       printf("INITIAL BALANCE : %d \n",initial_bal);
       printf("\n");
       printf("\t\t\t********THANK YOU********\n");

screen2();

       }
void del()
{
int ac;
printf("Enter your account number : ");
scanf("%d",&ac);

printf("ACCOUNT DELETED SUCCESSFULLY");
}

void screen2()
       {
       int ch;
       printf("press 1 create account\n"
	"press 2 to delete account\n"
	"press 3 to update account\n"
	"press 4 to display account\n"
	"press 5 to display all account\n"
	"press 6 to withdraw account\n"
	"press 7 to diposite\n"
	"press 8 to check balance\n"
	"press 9 to exit\n");
       scanf("%d",&ch);
       clrscr();
       if(ch==1)
	  {
	  create();
	  getch();
	  }
	  if(ch==2)
	  {
	  del();
	  }
	  if(ch==9)
	   {
	   exit(0);
	   }
	 }

void main()
       {
       clrscr();
       screen1();
       getch();
       }
