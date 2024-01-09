#include<stdio.h>
#include<string.h>

void user();
int getInt();

struct Result
{
	int p, c, m, id, total;
	char name[10];
	float per;
};

int main()
{
	user();
	return 0;
}

void user()
{
	struct Result s[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("\t---Enter %d Student Detail---\n",i+1);
		
		printf("\nRoll No. : ");
		s[i].id = getInt();
		
		fflush(stdin);
		printf("Name : ");
		gets(s[i].name);
		
		printf("Physics Marks : ");
		s[i].p = getInt();
		
		printf("Chemistry Marks : ");
		s[i].c = getInt();
		
		printf("Maths Marks : ");
		s[i].m = getInt();
		
		s[i].total = s[i].p + s[i].c + s[i].m;
		s[i].per = ((float)s[i].total) / 3;
	}
	
	printf("\n---Student Details---\n\n");
	for(i=0; i<5; i++)
	{
		printf("%s (%d)\n",s[i].name,s[i].id);
		
		printf("Physics = %d \n Chemistry = %d \n Maths = %d \n",s[i].p, s[i].c, s[i].m);
		
		printf("Total => %d / 300\nPersantage => %.2f %% \n\n\n",s[i].total, s[i].per);
	}
}

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}
