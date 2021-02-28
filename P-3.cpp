#include<stdio.h>

void swap(int *ptra,int *ptrb)
{
	int c;
	c=*ptra;
	*ptra=*ptrb;
	*ptrb=c;
	

	
}

int main()
{
	int a,b;
	
	printf("\nEnter the value of a =>");
	scanf("%d",&a);
	
	printf("Enter the value of b=>");
	scanf("%d",&b);
	
		printf("\nValue Before swapping a=>%d and b=>%d",a,b);
	
	swap(&a,&b);
	
		printf("\nValue after swapping a=>%d and b=>%d",a,b);
}
