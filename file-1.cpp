#include<stdio.h>

int main()

{

FILE *f1;

f1 = fopen("D:\\1.txt","r");

char ch;

while(ch!=EOF)
{
	ch = getc(f1);
	printf("%c",ch);
	
}

fclose(f1);

}
