
#include<stdio.h>
void force(int n,int b);
int main()
{
	int m,a;
	printf("enter mass and acc\n");
	scanf("%d %d",&m,&a);
	force(m,a);
	
}

void force(int n,int b)
{
	int f;
	f=n*b;
	printf("force=%d",f);
}
