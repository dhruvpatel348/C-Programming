#include<stdio.h>

int main()

{
	
	int i=0,k=0;
	FILE *f1;
	
	f1 = fopen("D:\\1.txt","r");
	
	char ch;
	
	while(ch!=EOF)
	{
		ch = getc(f1);
		
		if(ch == ' ')
		{
			i++;
		}
		else if(ch=='\n')
		{
			k++;
		}
	}
	printf("\n%d\n%d",i,k);
	fclose(f1);
}
