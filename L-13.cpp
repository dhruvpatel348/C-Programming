#include<stdio.h>

int main()

{
	int i,n,x=0,j;
	
	printf("\nEnter n=>");
	scanf("%d",&n);
	
	for(j=2;j<=n;j++)
	{
		for(i=2;i<=j;i++)
		{
			if(n%i == 0)
			{
				x=1;
				break;
			}
			
		}
		if(x == 0)
		
    	{
		printf("\n%d is a prime number",n);
    	}
    	
	}
}
