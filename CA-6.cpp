#include<stdio.h>
#include<string.h>

int main()

{
	char name[100];
	int i,u=0,l=0,s=0;
	
	printf("\nEnter name =>");
	gets(name);
	
	for(i=0;i<strlen(name);i++)
	{
		printf("\n %d",name[i]);
	}
	for(i=0;i<strlen(name);i++)
	{
	
	if(name[i]>=65 && name[i]<=90)
	{
		u++;
	}
	else if(name[i]>=97 && name[i]<=122)
	{
		l++;
	}
	else
	{
		s++;
	}
   }
   printf("\nCount of upper Letters is %d\nCount of lower letters is%d\ncount of other letters is %d",u,l,s);
}
