#include<stdio.h>

int main()

{
	int i,n;
	
    printf("\nEnter n=>");
    scanf("%d",&n);
    
    for(i=1; i<=n; i=i+2)
    {
    	printf("\n %d is Odd number",i);
	}
	 printf("\n\n");
	for(i=0; i<=n; i=i+2)
	{
			printf("\n %d is Even number",i);
	}
}


