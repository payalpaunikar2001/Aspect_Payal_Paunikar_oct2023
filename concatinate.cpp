#include<stdio.h>
main()
{
	int i,j;
	char s1[10],s2[10],s3[20];
	printf("enter your name\n");
	scanf("%s",s1);
	printf("enter your name\n");
	scanf("%s",s2);
	
	for(i=0;s1[i]!='\0';i++)
	{
	s3[j]=s1[i];
	j++;	
	}
	
	for(i=0;s2[i]!='\0';i++)
	{
	s3[j]=s2[i];
	j++;	
	}
	
	printf("concatinate %s ",s3);
}
