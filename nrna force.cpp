#include<stdio.h>
void s()
{
	int f,m,a;
	printf("enter mass and accl\n");
	scanf("%d %d",&m,&a);
	f=m*a;
	printf("force = %d",f);
}
main()
{
	s();
}
