#include<stdio.h>
main()
{
	int i,j,count=0;
	printf("prime number between 1 and 100 are: \n");
	for(i=1;i<=100;i++)
	{
	    for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0 && i!=1)
			printf("%d\n",i);
			count=0;
		}
	}
	

