#include<stdio.h>

int main()

{

	int a,b,c;
	
	printf("\nMaths marks out of 100=>");
	scanf("%d",&a);
	
	printf("\nScience marks out of 100=>");
	scanf("%d",&b);
	
	printf("\nEnglish marks out of 100=>");
	scanf("%d",&c);
	
	
	if(a+b+c<50)
	{
		printf("\nTotal marks => %d",a+b+c);
		printf("\nC grade obtained");
	}
	else if(a+b+c>=50 && a+b+c<70)
	{
		printf("\nTotal marks => %d",a+b+c);
		printf("\nB grade obtained");
	}
	else if(a+b+c>=70)
	{
	    printf("\nTotal marks => %d",a+b+c);
		printf("\nA grade obtained");
	}
	
}

