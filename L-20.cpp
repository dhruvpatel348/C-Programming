#include<stdio.h>

int main()

{
	int i,n,j,x=1;
	
	printf("\nEnter n=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",x);
			x=x+1;
		}
		printf("\n");
	}
}
