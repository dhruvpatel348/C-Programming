#include<stdio.h>
#include<string.h>

int main()

{
	char a[100],b[100],c[100]={""};
	int i;
	
	printf("\nEnter name 1 =>");
	gets(a);
	
	printf("\nEnter name 2 =>");
	gets(b);
	
	for(i=0;i<strlen(a);i++)
     {
     	c[i]=a[i];
	 }	
	 for(i=0;i<strlen(b);i++)
	 {
	 	c[i+strlen(a)]=b[i];
	 }
	 printf("\nCharacters in C are =>");
	 {
	 	printf("%s",c);
	 }
	
}
