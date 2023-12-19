#include<iostream.h>
#include<conio.h>
class palindrome
{
public:
int n,r,c,s;
public:
void setdata(int num);
void operation();
void getdata();
};

void palindrome :: setdata(int num)
{
n=num;
c=n;
}

void palindrome :: operation()
{
s=0;
while(n>0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
}

void palindrome :: getdata()
{
if(c==s)
{
cout<<"palindrome";
}
else
{
cout<<"not palindrome";
}
}

void main()
{
clrscr();
palindrome ob;
ob.setdata(121);
ob.operation();
ob.getdata();
getch();
}

