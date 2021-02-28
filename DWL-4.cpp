#include<stdio.h>

int main()

{
	int op,x,y,z;
	
	do
	{
		printf("\nEnter the option\nPress 1 for adition\nPress 2 for subtracton\nPress 3 for Multiplication\nPress 4 for Division\n=>");
		scanf("%d",&op);
		
		printf("\nENter x=>");
		scanf("%d",&x);
		printf("\nEnter y=>");
		scanf("%d",&y);
		
		if(op == 1)
		{
			z=x+y;
			printf("Add = %d",z);
		}
		else if(op == 2)
		{
			z=x-y;
			printf("%d",z);
		}
		else if(op == 3)
		{
			z=x*y;
			printf("%d",z);
		}
		else if(op == 4)
		{
			z=x/y;
			printf("%d",z);
		}
	}
		while(op != 5);
}
