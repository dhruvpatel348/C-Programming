#include<stdio.h>

int main()

{
	int a[100];
	int i,n;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		printf("\nEnter the number =>");
		scanf("%d",&a[i]);
		
	}
	for(i=1;i<n;i++)
	{
		printf("\nPress %d -> %d ",i,a[i]);
	}
	    printf("\n=>");
		scanf("%d",&i);
		
	printf("\nWe get =>%d",a[i]);
	
}
