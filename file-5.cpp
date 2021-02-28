#include<stdio.h>

int main()

{

FILE *f1;
FILE *f2;

f1 = fopen("D:\\1.txt","r");
f2 = fopen("D:\\2.txt","w");

char ch;

while(ch!=EOF)
{
	ch = getc(f1);
	putc(ch,f2);
	
}

fclose(f1);
fclose(f2);

printf("Copied");

}
