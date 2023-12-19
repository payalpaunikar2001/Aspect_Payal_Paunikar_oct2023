#include<stdio.h>
main()
{
	int i,c=0;
	char n1[10];
	printf("enter your name\n");
	scanf("%s",&n1);
	for(i=0;n1[i]!='\0';i++)
	{
		c=c+1;
	}
	printf("length=%d",c);
}
