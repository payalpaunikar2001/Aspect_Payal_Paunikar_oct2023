#include<stdio.h>
 
void sum()
{
	int n1,n2,add;
	printf("enter 2 number\n");
	scanf("%d %d",&n1,&n2);
	add=n1+n2;
	printf("%d",add);
}
void sub()
{
	int n1,n2,add;
	printf("enter 2 number\n");
	scanf("%d %d",&n1,&n2);
	add=n1-n2;
	printf("%d",add);
}
void mul()
{
	int n1,n2,add;
	printf("enter 2 number\n");
	scanf("%d %d",&n1,&n2);
	add=n1*n2;
	printf("%d",add);
}
void div()
{
	int n1,n2,add;
	printf("enter 2 number\n");
	scanf("%d %d",&n1,&n2);
	add=n1/n2;
	printf("%d",add);
}
 main()
{
	{
		int choice;
		printf("press 1 for sum\n"
		"press 2 for sub\n"
		"press 3 for mul\n"
		"press 4 for div\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			sum();
		}
		 else if(choice==2)
		{
			sub();
		}
		 else if(choice==3)
		{
			mul();
		}
		 else if(choice==4)
		{
			div();
		}
		else
		{
			
		}
	}
}

