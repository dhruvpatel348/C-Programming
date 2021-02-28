#include<stdio.h>
#include<string.h>

int main()

{
	char name[100];
	int i,sp=1;
	
	printf("\nEnter name =>");
	gets(name);
	
	for(i=0;i<strlen(name);i++)
	{
        if(sp==1)
        {
        	sp=0;
        	printf("%c",name[i]-32);
		}
		else
		{
			printf("%c",name[i]);
		}
		if(name[i]==' ')
		{
			if(sp==0)
			{
				sp=1;
			}
		}
	}
}
