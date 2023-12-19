#include<stdio.h>
void evenodd(int a );
main()
{
int num;
printf("enter a number");
scanf("%d",num);
evenodd(num);
}

void evenodd(int a)
{
if(a%2==0)
{
printf("%d is even",a);
}
else
{
printf("%d is odd");
}}