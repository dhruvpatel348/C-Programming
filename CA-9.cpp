#include<stdio.h>
#include<string.h>

int main()

{
	char a[100]={""},b[100]={""},c[100];
	int i,v=0,t=0;
	
	printf("\nEnter name =>");
	gets(c);
	
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'||c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
		{
		a[v]=c[i];	
		v++;
	    }
	    else
	    {
	    	b[t]=c[i];
	    	t++;
		}
		
	}
	printf("\nVowels are =>");
	printf(" %s",a);
	printf("\nConsonents are =>");
	printf("%s",b);
	
}
