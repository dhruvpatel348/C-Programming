#include<stdio.h>

int main()

{
	int a[100];
	int i,n,es=0,os=0,ec=0,oc=0,ts=0,tc=0;
	
	printf("\nEnter the limit =>");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		printf("\nEnter the number =>");
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i]%2 == 0)
		{
			printf("\n%d is Even",a[i]);
			es=es+a[i];
			ec++;
		}
		else
		{
			printf("\n%d is Odd",a[i]);
			os=os+a[i];
			oc++;
		}
		ts=ts+a[i];
		tc++;
	}
	printf("\nT0tal sum is %d\nTOtal count is %d \nSum of Even number is %d\nCount of Even number is %d\nSum of Odd number is %d\nCount of Odd number is %d",ts,tc,es,ec,os,oc);
	
}
