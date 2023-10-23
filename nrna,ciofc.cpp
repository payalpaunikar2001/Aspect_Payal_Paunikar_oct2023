#include<stdio.h>
 
void s1()
{
	float pi=3.14,res;
	int r;
	printf("enter radius of circle\n");
	scanf("%d",&r);
	res=2*pi*r;
	printf(" circumference of circle - %f",res);
}
main()
{
	s1();
}

