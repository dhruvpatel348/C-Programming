#include<stdio.h>

int main()

{
	int a[3][3],b[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the number =>");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
		for(i=0;i<3;i++)
	
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the number =>");
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	
	{
		for(j=0;j<3;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("\n Addition of both Matrix =>\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j] + b[i][j]);
		}
		printf("\n");
	}
}
