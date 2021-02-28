#include<stdio.h>

int main()

{
	int i,n,s=0;
	
	printf("\nENter n=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	    printf("%d + ",i);
	    s=s+i;
	
	}
	printf(" = %d",s);
}
