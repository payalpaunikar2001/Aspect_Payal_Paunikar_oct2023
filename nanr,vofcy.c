#include<stdio.h>
 
void s1()
{
	float pi=3.14,res;
	int r,h;
	printf("enter radius and height of cylinder\n");
	scanf("%d %d",&r,&h);
	res=pi*r*r*h;
	printf(" volume of cylinder - %f",res);
}
main()
{
	s1();
}

