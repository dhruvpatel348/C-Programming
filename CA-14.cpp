#include<stdio.h>
#include<string.h>

int main()

{
	char a[100],b[100];
	int i,j,k,l,m;
	
	printf("\nEnter name 1 =>");
	gets(a);
	
	printf("\nEnter name 2 =>");
	gets(b);
	
	l=0;
	while(a[l]!='\0')
	{
		l++;
	}
	
	m=0;
	while(b[m]!='\0')
	{
		m++;
	}
	
     i=0;
	 j=0;
	 k=0;
	 	
     while(i<=l && j<=m)
     {
         printf("\n%c %c",a[i],b[j]);
     
        if(a[i]!=b[j])
          {
            k=1;
            break;
          }
        i++;
        j++;
     }

	if(k==0)
	{
		printf("\nNames are Equal");
	}
	else
	{
		printf("\nNames are not Equal");
	}
	
}

