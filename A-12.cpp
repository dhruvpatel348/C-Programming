#include<stdio.h>

int main()

{
	int a[100];
	int i,n,o;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number =>");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
			if(a[i]>a[i++])
			{
				o=a[i];
			}
			else
			{
				o=a[i++];
			}
	}
	printf("\n%d is max",o);
}
