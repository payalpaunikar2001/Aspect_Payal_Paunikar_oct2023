#include<stdio.h>
main()
{
	int i,pcount=0,ncount=0,a[5];
	printf(" enter 5 element:\n ");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
	if(a[i]>0)
		pcount++;
		
	    else
		ncount++;
	}
		printf(" count of positive is %d \n",pcount);
		printf(" count of negative is %d",ncount);
	
}
