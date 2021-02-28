#include<stdio.h>

int main()

{
	int i,n;
	
	printf("\nEnter n=>");
	scanf("%d",&n);
	
	i=1;
	do
	{
		printf("\n%d * %d = %d",n,i,n*i);
		i++;
	} while(i<=10);
}
