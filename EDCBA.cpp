#include<stdio.h>
main()
{
	int r,c;
	char ch='E';
	char ch1;
	for(r=5;r>=1;r--)
	{
		ch1=ch;
		for(c=1;c<=r;c++)
		{
			printf("%c",ch1);
			ch1--;
		}
		printf("\n");
	}
}
