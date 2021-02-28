#include<stdio.h>


struct stu
{
	int no;
	char name[20];
};

int main()
{

struct stu s1,s2,s3;

printf("\nEnter s1's no =>");
scanf("%d",&s1.no);

fflush(stdin);

printf("\nEnter the name");
gets(s1.name);


printf("\nEnter s2's no =>");
scanf("%d",&s2.no);

fflush(stdin);

printf("\nEnter the name");
gets(s2.name);

printf("\nEnter s3's no =>");
scanf("%d",&s3.no);

fflush(stdin);

printf("\nEnter the name");
gets(s3.name);

printf("\nThe number is %d and Name is %s",s1.no,s1.name);
printf("\nThe number is %d and Name is %s",s2.no,s2.name);
printf("\nThe number is %d and Name is %s",s3.no,s3.name);


   
}



