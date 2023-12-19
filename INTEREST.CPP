#include<iostream.h>
#include<conio.h>
void sum(int n,int p, int r=7)
{
int res;
res=(p*n*r)/100;
cout<<res;
}
void main()
{
int p,r,n,res;
clrscr();
cout<<"enter principle ammount";
cin>>p;
cout<<"enter year";
cin>>n;
cout<<"enter rate of interest";
cin>>r;
if(r==0)
{
sum(p,n);
}
else
{
sum(p,n,r);
}
getch();
}


