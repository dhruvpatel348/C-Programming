#include<stdio.h>

int main()

{
	int a[100];
	int i,n,s=0,c=0;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		printf("\nEnter the number =>");
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i]%7 == 0)
		{
			printf("\n%d is divisible by 7",a[i]);
				s=s+a[i];
	        	c++;
			
		}
	
		
	}
	printf("\nSum is %d\nCount is %d",s,c);
	

}
