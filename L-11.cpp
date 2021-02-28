#include<stdio.h>

int main()

{
	int i,n,x=0;
	
	printf("\nEnter n=>");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
	
	if(n%i == 0)
	{
		x = 1;
		break;
	}
   }
   if(x == 0)
   
   {
   	printf("\n%d is prime number",n);
   }
   else
   {
   	printf("\n%d is not a prime number",n);
   }
   
}
