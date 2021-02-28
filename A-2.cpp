#include<stdio.h>

int main()

{
	int a[100];
	int i,n;
	 
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		printf("\nEnter the number");
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		printf("\n%d , %d",a[i],a[i]*a[i]);
	}
}
