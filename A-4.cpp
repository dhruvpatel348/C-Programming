#include<stdio.h>

int main()

{
	int a[100];
	
	int i,n,s=0;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		printf("\nEnter the number =>");
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		printf("%d + ",a[i]);
		s=s+a[i];
	}
	printf("= %d",s);
}
