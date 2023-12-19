#include<stdio.h>
main()
{
  int num,d1,d2,d3,d4,res;
  printf("enter number\n");
  scanf("%d",&num);
  
  d1=num%10;
  num=num/10;
  d2=num%10;
  num=num/10;
  d3=num%10;
  num=num/10;
  d4=num%10;
  
  res=d1+d2+d3+d4;
  
  printf("%d + %d + %d + %d = %d",d4,d3,d2,d1,res);
}

