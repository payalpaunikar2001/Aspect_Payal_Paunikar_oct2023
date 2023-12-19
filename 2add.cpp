#include<stdio.h>
void fun(int a,int b);
int main()
{
	int n1=2,n2=3;
	fun(n1,n2);
} 


void fun(int a,int b)
{
	int c;
	c=a+b;
	printf("%d",c);
}
