#include <stdio.h>

int main()

{
	int a,b,c;
	
	printf("\nMarks of Maths =>");
	scanf("%d",&a);
    
	printf("\nMarks of Science =>");
	scanf("%d",&b);
	
	printf("\nMarks of English =>");
	scanf("%d",&c);	
	
	if((a+b+c)>50)
	{
		printf("\nTotal marks =>%d",a+b+c);
		printf("\nStudent passed the Exam");
	}
	else
	{
		printf("\nTotal marks =>%d",a+b+c);
		printf("\nStudent failed the Exam");
	}
}
