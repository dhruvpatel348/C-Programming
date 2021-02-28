#include<stdio.h>

int main()

{
	int a[100];
	int i,n;
	
	printf("\nENter limit =>");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		printf("\nEnter the number =>");
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i]>0)
		{
			printf("\n-%d",a[i]);
		}
		else if(a[i]<0)
		{
			printf("\n%d",-a[i]);
		}
	}
	
}
