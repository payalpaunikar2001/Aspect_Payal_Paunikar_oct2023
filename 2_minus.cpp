#include<stdio.h>
void fun(int a,int b)
{
	int c;
	c=a-b;
	printf("%d",c);
}
main()
{
	int n1,n2;
	printf("enter n1 and n2\n");
	scanf("%d %d",&n1,&n2);
	fun(n1,n2);
}
