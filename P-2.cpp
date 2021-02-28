#include<stdio.h>
int main()

{
	int a[100];
	int i,n;
	int *ptr;
	
	printf("\nEnter the limit =>");
	scanf("%d",&n);
	
	ptr=a;
	
	for(i=0;i<n;i++)
	
	{
		printf("\nEnter value =>");
		scanf("%d",ptr);
		ptr++;
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}


