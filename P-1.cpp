#include<stdio.h>

int main()

{
	int a,b,*ptra,*ptrb;
	
	ptra=&a;
	ptrb=&b;
	
	printf("\nEnter the value of a=>");
	scanf("%d",&a);
	
	printf("\nEnter the value of b=>");
	scanf("%d",&b);
	
	printf("\nAddition of a and b => %d",*ptra + *ptrb);
	printf("\nSubtraction of a and b => %d",*ptra - *ptrb);
	printf("\nMultiplication of a and b => %d",*ptra * *ptrb);
	printf("\nDivision of a and b => %d",*ptra / *ptrb);
}
