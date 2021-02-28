#include<stdio.h>

int main()

{
	int a[100];
	int i,n,d,s=0,c=0;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		printf("\nEnter the number =>");
		scanf("%d",&a[i]);
	}
		printf("\nEnter the number to divide =>");
		scanf("%d",&d);
	 for(i=1;i<n;i++)
    {
	
		
		if(a[i]%d == 0)
		{
			
			printf("\n%d is divisible by %d",a[i],d);
			s=s+a[i];
			c++;
			
		}
		
		
	}
     	printf("\nSum is %d\nCount is %d",s,c);
}
