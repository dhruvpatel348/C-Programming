#include<stdio.h>

void scan(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the value =>");
		scanf("%d",&a[i]);
	}
}

void printarray(int a[],int n)
{
	int i;
	printf("\nValues\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
main()
{
	int a[100];
	int b[100];
	
	int i,n;
	printf("Enter the limit");
	scanf("%d",&n);
	
	scan(a,n);
	scan(b,n);
	
	printarray(a,n);
	printarray(b,n);
}
