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
	int n,i,m,pos;
	
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
m=s[0].English+s[0].Hindi;
pos=0;
for(i=0;i<n;i++)
{
	if(m<s[i].English+s[i].Hindi)
	{
		pos=i;
		m=s[i].English+s[i].Hindi;
	}
}
	if(s[pos].Hindi>35&&s[pos].English>35)
		{
		printf("\n%d\t%s\t%d\t%d\t%d\tPass",s[pos].no,s[pos].name,s[pos].English,s[pos].Hindi,s[pos].English+s[pos].Hindi);
	    }
	    else
	    {
	    	printf("\n%d\t%s\t%d\t%d\t%d\tFail",s[pos].no,s[pos].name,s[pos].English,s[pos].Hindi,s[pos].English+s[pos].Hindi);
		}
printf("\n=================================================\n");
} 
