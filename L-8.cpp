#include<stdio.h>

int main()

{
	int i,n,s=1;
	
    printf("\nEnter n=>");
    scanf("%d",&n);
    
    for(i=n; i>=1; i--)
    {
    	printf(" %d * ",i);
		s=s*i;
	}
	
	printf("\n factorial is %d",s);
}

