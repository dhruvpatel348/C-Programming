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
	for(i=n-1;i>=1;i--)
	{
		printf("\n%d",a[i]);
	}
}
