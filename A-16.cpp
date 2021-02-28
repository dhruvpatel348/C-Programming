#include<stdio.h>

int main()

{
	int a[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j==i)
			{
			printf("\nEnter the diagonal element =>");
			scanf("%d",&a[i][j]);
		    }
	    }
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j==i)
			{
			printf("%d",a[i][j]);
		    }
		    else
		    {
		    	printf("*");
			}
			
		}
		printf("\n");
	}
}
