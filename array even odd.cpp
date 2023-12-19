#include<stdio.h>
main()
{
	int i,ecount=0,ocount=0,a[5];
	printf(" enter 5 element:\n ");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
	if(a[i]%2==0)
		ecount++;
		
	    else
		ocount++;
	}
		printf(" count of even is %d \n",ecount);
		printf(" count of odd is %d",ocount);
	
}
