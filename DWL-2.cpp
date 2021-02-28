#include<stdio.h>

int main()

{
	int i,n;
	
	printf("\nEnter n=>");
	scanf("%d",&n);
	
	i=1;
	do{
		if(i%2 == 0)
		{
			printf("\n%d is an Even number",i);
		}
		else
		{
			printf("\n%d is an Odd number",i);
		}
		i++;
		
	}while(i<=n);
}
