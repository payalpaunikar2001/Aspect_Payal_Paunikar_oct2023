#include<stdio.h>
void s()
{
	int b,h,res;
	printf("enter b and h of triangle\n");
	scanf("%d %d",&b,&h);
	res=b*h/2;
	printf("area of triangle is %d",res);
}
main()
{
	s();
}
