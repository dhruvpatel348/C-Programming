#include<stdio.h>

int main()

{
	int i,n,j;
	
	printf("\nENter n=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=n;j>=i;j--)
		{
			printf(" *");
		}
		printf("\n");
	}
}
