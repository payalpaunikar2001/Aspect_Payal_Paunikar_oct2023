#include<stdio.h>
main()
{
	int num1,num2,sum,sub,mul,div;
	printf(" enter 2 integer number: ");
	scanf("%d %d",&num1,&num2);
	
	sum=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	
	printf(" addition of %d and %d is %d", num1,num2,sum);
	printf(" \n subtraction of %d and %d is %d", num1,num2,sub);
	printf(" \n multiplication of %d and %d is %d", num1,num2,mul);
	printf(" \n division of %d and %d is %d", num1,num2,div);
}
