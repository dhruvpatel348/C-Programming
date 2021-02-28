#include<stdio.h>

int main()

{
	int a[100],b[100],c[100];
	int i,n1,n2;
	
	printf("\nEnter limit 1 =>");
	scanf("%d",&n1);
	
	for(i=0;i<n1;i++)
	{
		printf("\nEnter the number =>");
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	
    printf("\nEnter limit 2 =>");
	scanf("%d",&n2);
	
	for(i=0;i<n2;i++)
	{
		printf("\nEnter the number=>");
		scanf("%d",&b[i]);
		c[i+n1]=b[i];
	}

	for(i=0;i<n1+n2;i++)
	{
       printf("\n%d",c[i]);
	}
	
}
