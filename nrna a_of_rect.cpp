#include<stdio.h>
void s()
{
	int l,w,res;
	printf("enter length and width of rectangle\n");
	scanf("%d %d",&l,&w);
	res=l*w;
	printf("area of rectangle is %d",res);
}
main()
{
	s();
}
