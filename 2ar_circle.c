#include<stdio.h>
void circle(float s);
main()
{
	float r;
	printf("enter radius\n");
	scanf("%f",&r);
	circle(r);
}

void circle(float s)
{
	 float area,pi=3.14;
	 area=pi*s*s;
	 printf("area of circle is %f",area);
}
