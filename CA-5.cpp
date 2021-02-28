#include<stdio.h>
#include<string.h>

int main()

{
	char name[100];
	int i,c=0;
	
	printf("\nEnter name =>");
	gets(name);
	
	for(i=0;i<strlen(name);i++)
	{
		printf("\n%c",name[i]);
		
		if(name[i] == 'A'||name[i] == 'E'||name[i] == 'I'||name[i] == 'O'||name[i] == 'U'||name[i] == 'a'||name[i] =='e'||name[i] =='i'||name[i] =='o'||name[i] =='u')
		{
			c++;
		}
		
	}
	printf("\nCOunt of Vowels is %d",c);
}
