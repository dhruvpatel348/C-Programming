#include<stdio.h>

int main()

{
	int a[100],e[100],o[100];
	int i,n,k=0,m=0;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number =>");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2 == 0)
		{
			e[k]=a[i];
			k++;
			
		}
		else
		{
			o[m]=a[i];
			m++;
			
		}
	}
	for(i=0;i<k;i++)
	{
	printf("\nEven number => %d",e[i]);
    }
    for(i=1;i<m;i++)
    {
	printf("\nOdd number => %d",o[i]);
    }
}
