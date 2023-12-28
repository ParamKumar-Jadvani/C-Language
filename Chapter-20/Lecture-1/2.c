#include<stdio.h>
#include<string.h>

int getInt();
void user();

struct Employee
{
	int id, age, experience;
	char name[20], role[20], city[20],company_name[20];
};

int main()
{
	user();
	return 0;
}

void user()
{
	printf("Enter no. of Employee : ");
	int n = getInt();
	
	struct Employee e[n];
	
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("\t---Enter Employee Data---\n");
		
		printf("Employee Id : ");
		e[i].id = getInt();
		
		fflush(stdin);
		printf("Employee Name : ");
		gets(e[i].name);
		
		printf("Employee Role : ");
		gets(e[i].role);
		
		printf("Employee Age : ");
		e[i].age = getInt();
		
		printf("Employee Experience : ");
		e[i].experience = getInt();
		
		fflush(stdin);
		printf("Employee City Name : ");
		gets(e[i].city);
		
		printf("Employee Company Name : ");
		gets(e[i].company_name);
	}
	
	for(i=0; i<n; i++)
	{
		printf("\t---Employee Data---\n");
		
		printf("Employee Id\t\t: %d \n",e[i].id);
		printf("Employee Name\t\t: %s \n",e[i].name);
		printf("Employee Age\t\t: %d \n",e[i].age);
		printf("Employee Role\t\t: %s \n",e[i].role);
		printf("Employee Experience\t: %d \n",e[i].experience);
		printf("Employee City Name\t: %s \n",e[i].city);
		printf("Employee Company Name\t: %s \n",e[i].company_name);
	}
}

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}
