#include<stdio.h>
#include<string.h>

int getInt();
void user();

struct StudentRecordSystem
{
	int id, age, standard;
	char name[20], course[20], city[20], school[20];
};


int main()
{
	user();
	return 0;
}

void user()
{
	printf("Enter No. of Student : ");
	int n = getInt();
	
	struct StudentRecordSystem s[n];
	
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("\t---Enter Data---\n");
		
		printf("Student Id : ");
		s[i].id = getInt();
		
		fflush(stdin);
		printf("Student Name : ");
		gets(s[i].name);
		
		printf("Student Age : ");
		s[i].age = getInt();
		
		fflush(stdin);
		printf("Student Course : ");
		gets(s[i].course);
		
		printf("Student Standard : ");
		s[i].standard = getInt();
		
		fflush(stdin);
		printf("Student School Name : ");
		gets(s[i].school);
		
		printf("Student City : ");
		gets(s[i].city);
	}
	
	for(i=0; i<n; i++)
	{
		printf("\t---Student Data---\n");
		
		printf("Student Id\t\t: %d \n",s[i].id);
		printf("Student Name\t\t: %s \n",s[i].name);
		printf("Student Age\t\t: %d \n",s[i].age);
		printf("Student Course\t\t: %s \n",s[i].course);
		printf("Student Standard\t: %d \n",s[i].standard);
		printf("Student School Name\t: %s \n",s[i].school);
		printf("Student City\t\t: %s \n",s[i].city);
		
	}
}

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}
