#include<iostream.h>
#include<conio.h>
int sum(int a,int b)
{
return(a+b);
}

int sum(int a,int b,int c)
{
return(a+b+c);
}

int sum(int a,int b,int c,int d)
{
return(a+b+c+d);
}
int sum(int a,int b,int c,int d,int e)
{
return(a+b+c+d+e);
}
void main()
{
clrscr();
int num,res,l=0;
char ch;
int a[10];
do
{
cout<<"enter number"<<endl;
cin>>num;
a[l]=num;
l++;
cout<<"press y to continue and n to quit"<<endl;
ch=getch();

}while(ch=='y');
if(l==2)
{
res=sum(a[0],a[1]);
cout<<res;
}
else
if(l==3)
{
res=sum(a[0],a[1],a[2]);
cout<<res;
}
else
if(l==4)
{
res=sum(a[0],a[1],a[2],a[3]);
cout<<res;
}
else
if(l==5)
{
res=sum(a[0],a[1],a[2],a[3],a[4]);
cout<<res;
}
cout<<endl;
getch();
}







