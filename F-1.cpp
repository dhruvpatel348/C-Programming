#include<stdio.h>
void add()
{
	int a,b;
	
	printf("\nEnter a=>");
	scanf("%d",&a);
	
	printf("\nEnter b=>");
	scanf("%d",&b);
	
	printf("%d + %d = %d",a,b,a+b);
}
void sub()
{
	int a,b;
	
	printf("\nEnter a=>");
	scanf("%d",&a);
	
	printf("\nEnter b=>");
	scanf("%d",&b);
	
	printf("%d - %d = %d",a,b,a-b);
}
void mul()
{
	int a,b;
	
	printf("\nEnter a=>");
	scanf("%d",&a);
	
	printf("\nEnter b=>");
	scanf("%d",&b);
	
	printf("%d * %d = %d",a,b,a*b);
}
void div()
{
	int a,b;
	
	printf("\nEnter a=>");
	scanf("%d",&a);
	
	printf("\nEnter b=>");
	scanf("%d",&b);
	
	printf("%d / %d = %d",a,b,a/b);
}
int main()
{
	add();
	
	sub();
	
	mul();
	
	div();
}

