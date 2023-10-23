#include<stdio.h>
void s()
{
	int s,d,t;
	printf("enter distance and time\n");
	scanf("%d %d",&d,&t);
	s=d/t;
	printf("speed = %d",s);
}
main()
{
	s();
}
