#include<stdio.h>

int main()

{
	int i,n,j;
	
	printf("\nEnter n=>");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		
		for(j=n;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
		}
}
