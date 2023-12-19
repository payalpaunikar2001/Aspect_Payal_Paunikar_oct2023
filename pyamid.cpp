#include<stdio.h>
#include<string.h>
main()
{
	char ch='E';
	int r,c;
	for ( r=5;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{
			printf("%c",r+64);
			r--;
		
		}
		printf("\n");
		//ch--;
	
	}
	
}
