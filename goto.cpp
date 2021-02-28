#include<stdio.h>

int main()

{
	int i,n;
	add:
	
	printf("\nEnter n=>");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("\n%d is positive",n);
	}
	else
	{
		goto add;
	}
	
}
