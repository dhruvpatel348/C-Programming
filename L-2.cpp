#include<stdio.h>

int main()

{
	int i,n;
	printf("\nEnter n=>");
	scanf("%d",&n); 
	for(i=0; i<=10; i++)
	{
		printf("\n%d * %d",n,i);
		printf(" = %d",n*i);
    }
}
