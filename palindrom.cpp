#include<stdio.h>
main()
{
  int num,d1,d2,d3,org,rev;
  printf("enter number\n");
  scanf("%d",&num);
  org=num;
  
  d1=num%10;
  num=num/10;
  d2=num%10;
  num=num/10;
  d3=num%10;
  
  rev=d1*100+d2*10+d3*1;
  //printf("%d",rev);
  
  if(org==rev)
  
  {printf("palindrom");
  }
  else
  printf("not palindrom");
}

