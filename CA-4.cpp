#include<stdio.h>
#include<string.h>

int main()

{
	char name[100];
	int i,c=0;
	
	printf("\nENter name =>");
	gets(name);
	
	for(i=0;i<strlen(name);i++)
	{
		printf("\n%c",name[i]);
	
	
	if(name[i] == 'd')
	{
		c++;
	}
    }
	
    
	printf("\nCount of character d => %d",c); 
	
}
