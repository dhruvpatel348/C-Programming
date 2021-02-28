#include<stdio.h>

int main()

{
	FILE *f1,*f2,*f3;
	
	f1=fopen("D:\\1.txt","r");
	f2=fopen("D:\\2.txt","r");
	f3=fopen("D:\\3.txt","w");
	
	char ch,ch1;
	
	while(ch!=EOF)
	
	{
			ch = getc(f1);
			
	putc(ch,f3);
	     	
		
	   }
	   
	   while(ch1!=EOF)
	   {
	   	ch1 = getc(f2);
	   	
	   	putc(ch1,f3);
	   }
	fclose(f1);
    fclose(f2);
    fclose(f3);
    
}
