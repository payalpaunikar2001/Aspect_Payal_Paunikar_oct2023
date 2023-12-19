#include<stdio.h>
main()
{
	int i;
	char n1[10];
	printf("enter your name\n");
	scanf("%s",n1);
	for(i=0;n1[i]!='\0';i++)
	{
		if(n1[i]>='a' && n1[i]<='z' )
		{
			n1[i]=n1[i]-32;
		}
	}
	printf("uppercase %s ",n1);
}
