#include<stdio.h>
void rec(int a, int b);
main()
{
	int l,w;
	printf("enter length and width\n");
	scanf("%d %d",&l,&w);
	rec(l,w);
}

void rec(int a, int b)
{
	int res;
	res=a*b;
	printf("area of rectangle %d",res);
}
