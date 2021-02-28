#include<stdio.h>

int main()

{
	int x,y,z;
	char op;
	
	
	
	do

	{
		fflush(stdin);
		printf("\nEnter the option\nPress a for adition\nPress b for subtracton\nPress c for Multiplication\nPress d for Division\n=>");
		scanf("%c",&op);
		
		printf("\nENter x=>");
		scanf("%d",&x);
		printf("\nEnter y=>");
		scanf("%d",&y);
		
		if(op == 'a')
		{
			z=x+y;
			printf("Add = %d",z);
		}
		else if(op == 'b')
		{
			z=x-y;
			printf("Sub = %d",z);
		}
		else if(op == 'c')
		{
			z=x*y;
			printf("Mul = %d",z);
		}
		else if(op == 'd')
		{
			z=x/y;
			printf("Div = %d",z);
		}
	}
		while(op != 'e');
}
