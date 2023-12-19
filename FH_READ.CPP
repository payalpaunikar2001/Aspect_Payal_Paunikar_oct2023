#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
clrscr();
char str[2000];
fstream ob(" c:\turboc++\turboc3\bin\cpp\bin_ob3",ios::in);
while(ob>>str)
cout<<str;
ob.close();
return 0;
}

