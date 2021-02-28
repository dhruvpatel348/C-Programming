#include<stdio.h>

int main()

{
	int i,n,se=0,so=0;
	
	printf("\nEnter n=>");
	scanf("%d",&n);
	
	for(i=0; i<=n; i++)
	{
		if(i % 2 == 0)
		
	{
		printf("\n%d is Even number",i);
	 se=se+i;
}
    }
      for(i=0; i<=n; i++)
	  {
	  	if(i % 2 != 0)
	  	{
	  		printf("\n%d is Odd number",i);
	    }
		so=so+i;  
      }	
      printf("\nSum of Even number is %d\nSum of Odd number is %d",se,so);
  }
			
