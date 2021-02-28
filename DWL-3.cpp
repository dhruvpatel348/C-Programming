#include<stdio.h>

int main()

{
	int i,n,f=1;
	
	printf("\nEnter n=>");
	scanf("%d",&n);
	i=n;
    	
	do
	{
		printf("%d * ",i);
		f=f*i;
		i--;
	}while(i>=1);
	printf("\n Factorial is %d",f);
}
