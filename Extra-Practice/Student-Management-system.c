#include<stdio.h>
#include<string.h>


int main()
{
	int sub1, stu1, i, j, k;
	
	printf("Enter Total Number of Subject : ");
	scanf("%d",&sub1);
	
	printf("\nEnter Total Number of Stuents : ");
	scanf("%d",&stu1);
	
	
	char subject[sub1][10], student[stu1][20];
	int sub_m[stu1][sub1]; 
	
	
	system("cls");
	
	fflush(stdin);
	for(i=0; i<sub1; i++)
	{
		printf("\nEnter %d Subject Name : ",i+1);
		gets(subject[i]);		
	}
	
	system("cls");
		
	printf("\t---Fill Up Given Details---\n");
	for(i=0; i<stu1; i++)
	{
		for(j=0; j<1; j++)
		{
			fflush(stdin);
			
			printf("\n\n Student Name : ");
			gets(student[i]);
			
			printf("\n Subject Marks\n");
			
			fflush(stdin);
			for(k=0; k<sub1; k++)
			{
				printf("\t%s => ",subject[k]);
				scanf("%d",&sub_m[i][k]);
			}
		}
	}
	
	
	system("cls");
	printf("\t---Student Details---\n");
	
	for(i=0; i<stu1; i++)
	{
		for(j=0; j<1; j++)
		{
			printf("\n %s\t\n",student[i]);
			
			for(k=0; k<sub1; k++)
			{
				printf("\t%s\t=> %d\n",subject[k],sub_m[i][k]);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
