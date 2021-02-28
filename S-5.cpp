#include<stdio.h>

struct stu
{
	int no;
	char name[20];
	int English;
	int Hindi;
	int Total;
};

int main()
{
	struct stu s[100];
	int n,i;
	
printf("\nEnter the total no of students =>");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("\nEnter the stu no =>");
	scanf("%d",&s[i].no);
	fflush(stdin);
	printf("\nEnter the name of stu =>");
	gets(s[i].name);
	printf("\nEnter the English Marks =>");
	scanf("%d",&s[i].English);
	printf("\nEnter the HIndi Marks =>");
	scanf("%d",&s[i].Hindi);
}
printf("\nNo\tName\tENglish\tHindi\tTotal\tPass/Fail");
printf("\n================================================\n");
	for(i=0;i<n;i++)
	{
		if(s[i].Hindi>=35&&s[i].English>=35)
		{
		printf("\n%d\t%s\t%d\t%d\t%d\tPass",s[i].no,s[i].name,s[i].English,s[i].Hindi,s[i].English+s[i].Hindi);
	    }
	}
printf("\n=================================================\n");
} 
