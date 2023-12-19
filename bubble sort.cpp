#include<stdio.h>
main()
{
	int a[5],i,j,temp;
	printf("enter 5 number\n");
	for(i=0;i<=4;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
	 for(j=0;j<=4-i;j++)
	 {
		if(a[j]>=a[j+1]);
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		} 		
	 }
	}
	for(i=0;i<=4;i++)
	{
		printf("%d",a[j+1]);
	}
    
}

	
	

