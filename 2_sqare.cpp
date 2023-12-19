#include<stdio.h>
void sq(int s);
main()
{
	int s;
	printf("enter a side\n");
	scanf("%d",&s);
	sq(s);
}

void sq(int t)
{
	int area;
	area=t*t;
	printf("area of square is %d",area);
}
