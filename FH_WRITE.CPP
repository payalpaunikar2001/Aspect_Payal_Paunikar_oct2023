#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
clrscr();
char str[2000];
fstream ob(" c:\turboc++\turboc3\bin\cpp\single_i.cpp",ios::in);
fstream ob1;
ob1.open(" c:\turboc++\turboc3\bin\cpp\single_i.cpp",ios::out);
while(!ob.eof())
{
ob.getline(str,2000);
cout<<str<<endl;
cout<<str;
}
getch();
}

