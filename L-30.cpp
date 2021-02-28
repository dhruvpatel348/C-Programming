#include<stdio.h>

int main()

{
	int i,n,j,k;
	
	printf("\nEnter n=>");
	scanf("%d",&n);
	
	{
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		
		for(j=n;j>=i;j--)
		{
			printf("* ");
		}
		for(k=2;k<=i;k++)
		{
			printf("  ");
		}
		for(j=n;j>=i;j--)
		{
			printf("* ");
		}
			for(k=2;k<=i;k++)
		{
			printf("  ");
		}
			for(j=n;j>=i;j--)
		{
			printf("* ");
		}
		
		printf("\n");
	}
   }
}

