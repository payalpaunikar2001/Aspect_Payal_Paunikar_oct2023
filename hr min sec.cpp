#include<stdio.h>
main()
{
	int a,sec,min,hr;
	printf("enter integer in sec:");
	scanf("%d", &a);
	hr=(a/3600);
	min=(sec=(3600*hr))/60;
	sec=(sec-(3600*hr)-(min*60));
	printf("hr:min:sec - %d:%d:%d \n",hr,min,sec);
}
