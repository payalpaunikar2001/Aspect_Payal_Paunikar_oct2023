#include<stdio.h>
main()
{
	int num,d1,d2,d3,org,res;
  printf("enter number\n");
  scanf("%d",&num);
  org=num;
  
  d1=num%10;
  num=num/10;
  d2=num%10;
  num=num/10;
  d3=num%10;
  
  res=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
  //printf("%d",rev);
  
  if(org==res)
  
  {printf(" %d is armstrong",org);
  }
  else
  printf("not armstrong");
}
