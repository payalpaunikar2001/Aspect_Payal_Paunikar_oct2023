#include<stdio.h>
main()
{
	int i,a[5],sum=0;
	printf("enter 5 elements:\n");
	for(i=0;i<=4;i++)
	scanf("%d", &a[i]);
	for(i=0;i<=4;i++)
	{
		if(a[i]%2==1)
		{
	    printf(" %d ",a[i]);
        sum=sum+a[i];
		}
	}
    printf("\nsum of odd no is %d",sum);
}
