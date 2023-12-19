#include<stdio.h>
main()
{
	int i,num,count;
	printf("enter number \n");
	scanf("%d",&num);
	for(count=2;count<num;count++)
	{
		if(num%count==0)
		{
			printf("no. is not prime");
			break;
		}
	}
	
	if(num==count)
	{
		printf("no. is prime");
	}
	
}
