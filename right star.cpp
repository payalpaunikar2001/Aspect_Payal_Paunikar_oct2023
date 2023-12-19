#include<stdio.h>
main()
{
	int r,c,sp;
	
	for(r=4;r>=1;r--)
	{
        for(c=1;c<=r;c++)
        {
        	printf("*");
		}
		printf("\n");
    }
	
	for(r=4;r>=1;r--)
	{
		for(sp=4;sp>=r;sp--)
		{
	 printf(" ");
        }
        for(c=1;c<=r;c++)
        {
        	printf("*");
		}
		printf("\n");
    }
}
