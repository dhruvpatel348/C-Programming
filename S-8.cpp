#include<stdio.h>

struct stu
{
	int no;
	char name[20];
	int English;
	int Hindi;
};
union student
{
	int no;
	char name[20];
	int English;
	int Hindi;
};
int main()
{
struct stu s1;
union student s2;

printf("\nEnter the number");
scanf("%d",&s1.no);
fflush(stdin);
printf("\nEnter the name");
gets(s1.name);
printf("\nEnter the Marks of english");
scanf("%d",&s1.English);
printf("\nEnter the Marks of Hindi");
scanf("%d",&s1.Hindi);


printf("\nEnter the number");
scanf("%d",&s2.no);
fflush(stdin);
printf("\nEnter the name");
gets(s1.name);
printf("\nEnter the Marks of english");
scanf("%d",&s2.English);
printf("\nEnter the Marks of Hindi");
scanf("%d",&s2.Hindi);

printf("\nNo\tName\tEnglish\tHindi");

printf("\n%d\t%s\t%d\t%d",s1.no,s1.name,s1.English,s1.Hindi);
printf("\n%d\t%s\t%d\t%d",s2.no,s2.name,s2.English,s2.Hindi);
}

