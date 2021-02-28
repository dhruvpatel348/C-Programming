#include<stdio.h>

int main()

{
	int a[100];
	int i,n;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	

	
	for(i=0;i<n;i++)
	{
		printf("\nEnter value =>");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n%d ",a[i]);
	}
	
}
	
