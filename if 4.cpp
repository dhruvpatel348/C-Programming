#include<stdio.h>

int main()

{
	int a;
	int x;
	
	printf("\nEnter 1 for square\nEner 2 for cube\nEnter 3 for oddeven\nEnter =>");
	scanf("%d",&x);
	
	if(x==1)
	{
	printf("\nEnter a=>");
	scanf("%d",&a);
	
	printf("\nSquare of a=>%d",a*a);
}
else if(x==2)
	{
	printf("\nEnter a=>");
	scanf("%d",&a);
		
	
	printf("\nCube of a=>%d",a*a*a);
	
	
}
else if(x==3)
{
	printf("\nEnter a=>");
	scanf("%d",&a);

	if(a%2 == 0)
	{
		printf("\nEven number");
	}
	else
	{
		printf("\nOdd number");
	}

}
}
