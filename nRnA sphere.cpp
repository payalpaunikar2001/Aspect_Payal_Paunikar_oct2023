#include<stdio.h>
 
void s()
{
	float pi=3.14,res;
	int r;
	printf("enter radius of sphere\n");
	scanf("%d",&r);
	res=4/3*pi*r*r*r;
	printf(" volume of sphere - %f",res);
}
main()
{
	s();
}

