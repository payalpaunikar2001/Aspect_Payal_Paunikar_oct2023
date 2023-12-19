#include<iostream.h>
#include<conio.h>

class add
{
public:
int a,b;
void setdata()
  {
  a=5;
  b=10;
  }
void getdata()
  {
  cout<<a<<endl;
  cout<<b;
  }
};
void main()
 {
 clrscr();
 add obj;
 obj.setdata();
 obj.getdata();
 getch();
}

